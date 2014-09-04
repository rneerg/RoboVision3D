/*
 * HandEyeCalibration.hpp
 *
 *  Created on: Jun 11, 2013
 *      Author: thomas
 */

#ifndef HANDEYECALIBRATION_HPP_
#define HANDEYECALIBRATION_HPP_

#include "../../include/CalTI/tiv_types.hpp"
#include "../../include/CalTI/dornaika.hpp"
#include "../../include/CalTI/rot.hpp"
#include <iostream>
#include <stdlib.h>
#include <eigen3/Eigen/Core>
#include "Calibration.hpp"

#include "rot.hpp"

#include "../../CalTI/src/marker/src/aruco.h"
#include "../../CalTI/src/marker/src/cvdrawingutils.h"

using namespace aruco;

namespace dti {

class HandEyeCalibration : public Calibration {

public:
	HandEyeCalibration(SharedData* sharedData);
	virtual ~HandEyeCalibration();

	void detectARMarker(cv::Mat& img, CameraID CAM, bool found[3], float MarkerSize);
	int addImagePoints(std::vector<cv::Point2f> corners, int imgId);
	void printResults();
	void storeResults(std::string path);
	void init();
	void clearAllData();
	void computeCameraPose();
	double calibrate();
	void printCalibResults();
	std::string calibResultsAsString();
	void updateCalibrationFlags();
	void saveRobotPoses(std::string path);
	void loadRobotPoses();


	void setFilesLists(QStringList files);
	void resizePoints(int fileNum );
	void setRobotPoses(std::vector<tiv::pose> robotPoses){ _robPoses = robotPoses;};

private:
	/** Member variables 	**/
	QStringList 		_fileList;

	double computeReprojectionErrors(
			       					const std::vector<cv::Point3f>& objectPoints,
			       					const std::vector<cv::Point2f>& imagePoints,
			       					const cv::Mat& rvecs, const cv::Mat& tvecs,
			       					const cv::Mat& cameraMatrix, const cv::Mat& distCoeffs);
    // ARRAY AND VECTOR STORAGE:
    std::vector<std::vector<cv::Point2f> > _imagePoints;
    std::vector<std::vector<cv::Point3f> > _objectPoints;
    std::vector<tiv::pose> _camPoses;
    std::vector<tiv::pose> _robPoses;

    cv::Mat _handEyeTransform;
    cv::Mat _calibrationTargetTransform;
	int	_validImgs;

	bool _isInverted;

	inline const char * const BoolToString(bool b)
	{
	  return b ? "true" : "false";
	}
};

} /* namespace perception */
#endif /* HANDEYECALIBRATION_HPP_ */
