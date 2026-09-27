#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/Animations/Rigging/AnimationJobBinder_2.hpp"
#include "UnityEngine/Animations/Rigging/ConstraintProperties.hpp"
#include "UnityEngine/Animations/Rigging/ConstraintsUtils.hpp"
#include "UnityEngine/Animations/Rigging/IAnimationJobBinder.hpp"
#include "UnityEngine/Animations/Rigging/IAnimationJobData.hpp"
#include "UnityEngine/Animations/Rigging/IRigConstraint.hpp"
#include "UnityEngine/Animations/Rigging/IRigLayer.hpp"
#include "UnityEngine/Animations/Rigging/IRigSyncSceneToStreamData.hpp"
#include "UnityEngine/Animations/Rigging/Property.hpp"
#include "UnityEngine/Animations/Rigging/PropertyDescriptor.hpp"
#include "UnityEngine/Animations/Rigging/PropertyType.hpp"
#include "UnityEngine/Animations/Rigging/Rig.hpp"
#include "UnityEngine/Animations/Rigging/RigBuilder.hpp"
#include "UnityEngine/Animations/Rigging/RigBuilderUtils.hpp"
#include "UnityEngine/Animations/Rigging/RigBuilderUtils_PlayableChain.hpp"
#include "UnityEngine/Animations/Rigging/RigEffectorData.hpp"
#include "UnityEngine/Animations/Rigging/RigEffectorData_Style.hpp"
#include "UnityEngine/Animations/Rigging/RigLayer.hpp"
#include "UnityEngine/Animations/Rigging/RigProperties.hpp"
#include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob.hpp"
#include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJobBinder_1.hpp"
#include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob_PropertySyncer.hpp"
#include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJob_TransformSyncer.hpp"
#include "UnityEngine/Animations/Rigging/RigTransform.hpp"
#include "UnityEngine/Animations/Rigging/RigUtils.hpp"
#include "UnityEngine/Animations/Rigging/RigUtils_RigSyncSceneToStreamData.hpp"
#include "UnityEngine/Animations/Rigging/SyncSceneToStreamAttribute.hpp"
#include "UnityEngine/Animations/Rigging/SyncSceneToStreamLayer.hpp"
#include "UnityEngine/Animations/Rigging/SyncableProperties.hpp"
#include "UnityEngine/Animations/Rigging/Vector3Bool.hpp"
#include "UnityEngine/Animations/Rigging/WeightedTransform.hpp"
#include "UnityEngine/Animations/Rigging/WeightedTransformArray.hpp"
#include "UnityEngine/Animations/Rigging/WeightedTransformArray_Enumerator.hpp"
#ifdef __cpp_modules
                    export module Rigging;
                    #endif
                
