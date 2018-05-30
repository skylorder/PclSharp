// Code generated by a template
#pragma once
#include "..\export.h"

#include "pcl\pcl_base.h"
#include "pcl\point_types.h"
#include <pcl/search/kdtree.h>

using namespace pcl::search;
using namespace std;

typedef pcl::PointXYZ PointXYZ;
typedef KdTree<PointXYZ> search_t;
typedef boost::shared_ptr<pcl::PointCloud<PointXYZ>> boost_cloud;

#ifdef __cplusplus
extern "C" {
#endif 

EXPORT(search_t*) search_kdtree_xyz_ctor(int sorted)
{
	return new search_t(sorted);
}

EXPORT(void) search_kdtree_xyz_delete(search_t** ptr)
{
	delete *ptr;
	*ptr = NULL;
}

EXPORT(void) search_kdtree_xyz_setInputCloud(KdTree<PointXYZ>* ptr, pcl::PointCloud<PointXYZ>* cloud)
{
	ptr->setInputCloud(boost_cloud(boost_cloud(), cloud));
}

EXPORT(void) search_kdtree_xyz_setSortedResults(KdTree<PointXYZ>* ptr, int value)
{ ptr->setSortedResults(value); }
EXPORT(int) search_kdtree_xyz_getSortedResults(KdTree<PointXYZ>* ptr)
{ return ptr->getSortedResults(); }

#ifdef __cplusplus  
}
#endif  
