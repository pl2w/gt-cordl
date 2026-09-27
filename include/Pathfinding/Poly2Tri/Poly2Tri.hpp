#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Pathfinding/Poly2Tri/AdvancingFront.hpp"
#include "Pathfinding/Poly2Tri/AdvancingFrontNode.hpp"
#include "Pathfinding/Poly2Tri/DTSweep.hpp"
#include "Pathfinding/Poly2Tri/DTSweepBasin.hpp"
#include "Pathfinding/Poly2Tri/DTSweepConstraint.hpp"
#include "Pathfinding/Poly2Tri/DTSweepContext.hpp"
#include "Pathfinding/Poly2Tri/DTSweepDebugContext.hpp"
#include "Pathfinding/Poly2Tri/DTSweepEdgeEvent.hpp"
#include "Pathfinding/Poly2Tri/DTSweepPointComparator.hpp"
#include "Pathfinding/Poly2Tri/DelaunayTriangle.hpp"
#include "Pathfinding/Poly2Tri/FixedArray3_1.hpp"
#include "Pathfinding/Poly2Tri/FixedBitArray3.hpp"
#include "Pathfinding/Poly2Tri/Orientation.hpp"
#include "Pathfinding/Poly2Tri/P2T.hpp"
#include "Pathfinding/Poly2Tri/PointOnEdgeException.hpp"
#include "Pathfinding/Poly2Tri/Polygon.hpp"
#include "Pathfinding/Poly2Tri/PolygonPoint.hpp"
#include "Pathfinding/Poly2Tri/Triangulatable.hpp"
#include "Pathfinding/Poly2Tri/TriangulationAlgorithm.hpp"
#include "Pathfinding/Poly2Tri/TriangulationConstraint.hpp"
#include "Pathfinding/Poly2Tri/TriangulationContext.hpp"
#include "Pathfinding/Poly2Tri/TriangulationDebugContext.hpp"
#include "Pathfinding/Poly2Tri/TriangulationMode.hpp"
#include "Pathfinding/Poly2Tri/TriangulationPoint.hpp"
#include "Pathfinding/Poly2Tri/TriangulationUtil.hpp"
#ifdef __cpp_modules
                    export module Poly2Tri;
                    #endif
                
