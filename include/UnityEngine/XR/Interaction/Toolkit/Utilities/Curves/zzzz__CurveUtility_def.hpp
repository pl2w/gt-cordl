#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Curves/CurveUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CurveUtility)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
class CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/ApproximateCubicBezierLength_00000446$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/ApproximateCubicBezierLength_00000446$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/CalculateProjectileFlightTime_00000448$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/CalculateProjectileFlightTime_00000448$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/ElevateQuadraticToCubicBezier_00000441$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/GenerateCubicBezierCurve_00000442$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/GenerateCubicBezierCurve_00000442$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/SampleCubicBezierPoint_00000440$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/SampleCubicBezierPoint_00000440$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/SampleProjectilePoint_00000447$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/SampleProjectilePoint_00000447$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/SampleQuadraticBezierPoint_0000043F$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/TryGenerateCubicBezierCurve_00000443$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/TryGenerateCubicBezierCurve_00000444$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Curves", "CurveUtility/TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate");
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility
class CORDL_TYPE CurveUtility : public ::System::Object {
public:
// Declarations
using ApproximateCubicBezierLength_00000446$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall;

using ApproximateCubicBezierLength_00000446$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate;

using CalculateProjectileFlightTime_00000448$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall;

using CalculateProjectileFlightTime_00000448$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate;

using ElevateQuadraticToCubicBezier_00000441$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall;

using ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate;

using GenerateCubicBezierCurve_00000442$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall;

using GenerateCubicBezierCurve_00000442$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate;

using SampleCubicBezierPoint_00000440$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall;

using SampleCubicBezierPoint_00000440$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate;

using SampleProjectilePoint_00000447$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall;

using SampleProjectilePoint_00000447$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate;

using SampleQuadraticBezierPoint_0000043F$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall;

using SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate;

using TryGenerateCubicBezierCurve_00000443$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall;

using TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate;

using TryGenerateCubicBezierCurve_00000444$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall;

using TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::ApproximateCubicBezierLength_00000446$PostfixBurstDelegate))]
/// @brief Method ApproximateCubicBezierLength, addr 0xb42bee0, size 0x4, virtual false, abstract: false, final false
static inline float_t ApproximateCubicBezierLength(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions) ;

/// [BurstCompile]
/// @brief Method ApproximateCubicBezierLength$BurstManaged, addr 0xb42d28c, size 0x134, virtual false, abstract: false, final false
static inline float_t ApproximateCubicBezierLength$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::CalculateProjectileFlightTime_00000448$PostfixBurstDelegate))]
/// @brief Method CalculateProjectileFlightTime, addr 0xb42bee8, size 0x4, virtual false, abstract: false, final false
static inline void CalculateProjectileFlightTime(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime) ;

/// [BurstCompile]
/// @brief Method CalculateProjectileFlightTime$BurstManaged, addr 0xb42d410, size 0xc8, virtual false, abstract: false, final false
static inline void CalculateProjectileFlightTime$BurstManaged(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate))]
/// @brief Method ElevateQuadraticToCubicBezier, addr 0xb42bed0, size 0x4, virtual false, abstract: false, final false
static inline void ElevateQuadraticToCubicBezier(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3) ;

/// [BurstCompile]
/// @brief Method ElevateQuadraticToCubicBezier$BurstManaged, addr 0xb42cd84, size 0x98, virtual false, abstract: false, final false
static inline void ElevateQuadraticToCubicBezier$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::GenerateCubicBezierCurve_00000442$PostfixBurstDelegate))]
/// @brief Method GenerateCubicBezierCurve, addr 0xb42bed4, size 0x4, virtual false, abstract: false, final false
static inline void GenerateCubicBezierCurve(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints) ;

/// [BurstCompile]
/// @brief Method GenerateCubicBezierCurve$BurstManaged, addr 0xb42ce1c, size 0x1c4, virtual false, abstract: false, final false
static inline void GenerateCubicBezierCurve$BurstManaged(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::SampleCubicBezierPoint_00000440$PostfixBurstDelegate))]
/// @brief Method SampleCubicBezierPoint, addr 0xb42becc, size 0x4, virtual false, abstract: false, final false
static inline void SampleCubicBezierPoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point) ;

/// [BurstCompile]
/// @brief Method SampleCubicBezierPoint$BurstManaged, addr 0xb42ccf4, size 0x90, virtual false, abstract: false, final false
static inline void SampleCubicBezierPoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::SampleProjectilePoint_00000447$PostfixBurstDelegate))]
/// @brief Method SampleProjectilePoint, addr 0xb42bee4, size 0x4, virtual false, abstract: false, final false
static inline void SampleProjectilePoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point) ;

/// [BurstCompile]
/// @brief Method SampleProjectilePoint$BurstManaged, addr 0xb42d3c0, size 0x50, virtual false, abstract: false, final false
static inline void SampleProjectilePoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate))]
/// @brief Method SampleQuadraticBezierPoint, addr 0xb42bec8, size 0x4, virtual false, abstract: false, final false
static inline void SampleQuadraticBezierPoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point) ;

/// [BurstCompile]
/// @brief Method SampleQuadraticBezierPoint$BurstManaged, addr 0xb42cc90, size 0x64, virtual false, abstract: false, final false
static inline void SampleQuadraticBezierPoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate))]
/// @brief Method TryGenerateCubicBezierCurve, addr 0xb42bedc, size 0x4, virtual false, abstract: false, final false
static inline bool TryGenerateCubicBezierCurve(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility::TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate))]
/// @brief Method TryGenerateCubicBezierCurve, addr 0xb42bed8, size 0x4, virtual false, abstract: false, final false
static inline bool TryGenerateCubicBezierCurve(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

/// [BurstCompile]
/// @brief Method TryGenerateCubicBezierCurve$BurstManaged, addr 0xb42d168, size 0x124, virtual false, abstract: false, final false
static inline bool TryGenerateCubicBezierCurve$BurstManaged(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

/// [BurstCompile]
/// @brief Method TryGenerateCubicBezierCurve$BurstManaged, addr 0xb42cfe0, size 0x188, virtual false, abstract: false, final false
static inline bool TryGenerateCubicBezierCurve$BurstManaged(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

/// @brief Method TryGenerateCubicBezierCurveCore, addr 0xb42c6b4, size 0x194, virtual false, abstract: false, final false
static inline bool TryGenerateCubicBezierCurveCore(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility(CurveUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility(CurveUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11269};

/// @brief Field k_EightEpsilon offset 0xffffffff size 0x4
static constexpr float_t  k_EightEpsilon{static_cast<float_t>(9.536743e-7f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/CalculateProjectileFlightTime_00000448$BurstDirectCall
class CORDL_TYPE CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42eff4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42ef04, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42cb28, size 0x168, virtual false, abstract: false, final false
static inline void Invoke(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall(CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall(CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/CalculateProjectileFlightTime_00000448$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42ee18, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0xb42eef8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42ee04, size 0x14, virtual true, abstract: false, final false
inline void Invoke(float_t  velocityMagnitude, float_t  gravityAcceleration, float_t  angleRad, float_t  height, float_t  extraFlightTime, ::by_ref<float_t>  flightTime) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42ed64, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate(CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate(CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11267};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_CalculateProjectileFlightTime_00000448$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/SampleProjectilePoint_00000447$BurstDirectCall
class CORDL_TYPE CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42ed4c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42ec5c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42ca14, size 0x114, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall(CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall(CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11266};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/SampleProjectilePoint_00000447$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42eb4c, size 0x104, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb42ec50, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42eb38, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  initialVelocity, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, float_t  time, ::by_ref<::Unity::Mathematics::float3>  point) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42ea84, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate(CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate(CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11265};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleProjectilePoint_00000447$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/ApproximateCubicBezierLength_00000446$BurstDirectCall
class CORDL_TYPE CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42ea6c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42e97c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42c848, size 0x1cc, virtual false, abstract: false, final false
static inline float_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall(CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall(CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/ApproximateCubicBezierLength_00000446$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42e850, size 0x104, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb42e954, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42e83c, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, int32_t  subdivisions) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42e788, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate(CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate(CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11263};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ApproximateCubicBezierLength_00000446$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/TryGenerateCubicBezierCurve_00000444$BurstDirectCall
class CORDL_TYPE CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42e770, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42e680, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42c4f4, size 0x1c0, virtual false, abstract: false, final false
static inline bool Invoke(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall(CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall(CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11262};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42e4ec, size 0x16c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_9) ;

/// @brief Method EndInvoke, addr 0xb42e658, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42e4d8, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(int32_t  numTargetPoints, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  midPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42e438, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate(CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate(CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11261};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000444$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/TryGenerateCubicBezierCurve_00000443$BurstDirectCall
class CORDL_TYPE CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42e420, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42e330, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42c3d0, size 0x124, virtual false, abstract: false, final false
static inline bool Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall(CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall(CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11260};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42e184, size 0x184, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10) ;

/// @brief Method EndInvoke, addr 0xb42e308, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42e170, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, float_t  minLineLength, float_t  startOffset, float_t  endOffset) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42e0d0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate(CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate(CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11259};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_TryGenerateCubicBezierCurve_00000443$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/GenerateCubicBezierCurve_00000442$BurstDirectCall
class CORDL_TYPE CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42e0b8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42dfc8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42c2e8, size 0xe8, virtual false, abstract: false, final false
static inline void Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall(CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall(CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11258};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/GenerateCubicBezierCurve_00000442$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42de80, size 0x13c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0xb42dfbc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42de6c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42ddcc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate(CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate(CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11257};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_GenerateCubicBezierCurve_00000442$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/ElevateQuadraticToCubicBezier_00000441$BurstDirectCall
class CORDL_TYPE CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42ddb4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42dcc4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42c174, size 0x174, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall(CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall(CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11256};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42db88, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method EndInvoke, addr 0xb42dcb8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42db70, size 0x18, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, ::by_ref<::Unity::Mathematics::float3>  c0, ::by_ref<::Unity::Mathematics::float3>  c1, ::by_ref<::Unity::Mathematics::float3>  c2, ::by_ref<::Unity::Mathematics::float3>  c3) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42dabc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate(CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate(CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11255};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_ElevateQuadraticToCubicBezier_00000441$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/SampleCubicBezierPoint_00000440$BurstDirectCall
class CORDL_TYPE CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42daa4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42d9b4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42c01c, size 0x158, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall(CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall(CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11254};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/SampleCubicBezierPoint_00000440$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42d880, size 0x128, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0xb42d9a8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42d86c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p3, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42d7b8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate(CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate(CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11253};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleCubicBezierPoint_00000440$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/SampleQuadraticBezierPoint_0000043F$BurstDirectCall
class CORDL_TYPE CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42d7a0, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42d6b0, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42beec, size 0x130, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall(CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall(CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Curves {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Curves.CurveUtility/SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate
class CORDL_TYPE CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42d5a0, size 0x104, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb42d6a4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42d58c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p0, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  p2, float_t  t, ::by_ref<::Unity::Mathematics::float3>  point) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42d4d8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate(CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate(CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Curves::CurveUtility_SampleQuadraticBezierPoint_0000043F$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Curves
