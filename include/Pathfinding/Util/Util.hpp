#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Pathfinding/Util/ArrayPool_1.hpp"
#include "Pathfinding/Util/Checksum.hpp"
#include "Pathfinding/Util/Draw.hpp"
#include "Pathfinding/Util/GraphGizmoHelper.hpp"
#include "Pathfinding/Util/GraphTransform.hpp"
#include "Pathfinding/Util/GridLookup_1.hpp"
#include "Pathfinding/Util/Guid.hpp"
#include "Pathfinding/Util/IAstarPooledObject.hpp"
#include "Pathfinding/Util/IMovementPlane.hpp"
#include "Pathfinding/Util/ITransform.hpp"
#include "Pathfinding/Util/ListExtensions.hpp"
#include "Pathfinding/Util/ListPool_1.hpp"
#include "Pathfinding/Util/Memory.hpp"
#include "Pathfinding/Util/MovementUtilities.hpp"
#include "Pathfinding/Util/ObjectPoolSimple_1.hpp"
#include "Pathfinding/Util/ObjectPool_1.hpp"
#include "Pathfinding/Util/ParallelWorkQueue_1.hpp"
#include "Pathfinding/Util/PathInterpolator.hpp"
#include "Pathfinding/Util/PreserveAttribute.hpp"
#include "Pathfinding/Util/RetainedGizmos.hpp"
#include "Pathfinding/Util/RetainedGizmos_Hasher.hpp"
#include "Pathfinding/Util/RetainedGizmos_MeshWithHash.hpp"
#include "Pathfinding/Util/StackPool_1.hpp"
#include "Pathfinding/Util/TileHandler.hpp"
#include "Pathfinding/Util/TileHandler_CutMode.hpp"
#include "Pathfinding/Util/TileHandler_CuttingResult.hpp"
#ifdef __cpp_modules
                    export module Util;
                    #endif
                
