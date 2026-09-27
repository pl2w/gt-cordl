#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/DropEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/IXRDropTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/IXRGrabTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRBaseGrabTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRBaseGrabTransformer_RegistrationMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRDualGrabFreeTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRDualGrabFreeTransformer_PoseContributor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRGeneralGrabTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRGeneralGrabTransformer_ManipulationAxes.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRGeneralGrabTransformer_TwoHandedRotationMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRLegacyGrabTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRSingleGrabFreeTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRSocketGrabTransformer.hpp"
#ifdef __cpp_modules
                    export module Transformers;
                    #endif
                
