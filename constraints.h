#pragma once

// Module
#define DEFAULT_SOCKET_PATH "/tmp/viam.csi.sock"
#define RESOURCE_TYPE "CSICamera"
#define API_NAMESPACE "viam"
#define API_TYPE "camera"
#define API_SUBTYPE "csi"

// GST
#define GST_GET_STATE_TIMEOUT 1 
#define GST_CHANGE_STATE_TIMEOUT 5

// Camera
#define DEFAULT_INPUT_SOURCE "nvarguscamerasrc"
#define DEFAULT_INPUT_SENSOR "0"
#define DEFAULT_INPUT_FORMAT "video/x-raw(memory:NVMM)"
#define DEFAULT_INPUT_WIDTH 1920
#define DEFAULT_INPUT_HEIGHT 1080
#define DEFAULT_INPUT_FRAMERATE 30
#define DEFAULT_INPUT_FLIP_METHOD "0"
#define DEFAULT_OUTPUT_FORMAT "video/x-raw"
#define DEFAULT_OUTPUT_WIDTH 960
#define DEFAULT_OUTPUT_HEIGHT 540
#define DEFAULT_OUTPUT_ENCODER "nvjpegenc"
#define DEFAULT_OUTPUT_MIMETYPE "image/jpeg"
