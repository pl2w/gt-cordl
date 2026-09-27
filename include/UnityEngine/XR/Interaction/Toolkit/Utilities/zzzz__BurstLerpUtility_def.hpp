#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/BurstLerpUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BurstLerpUtility)
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
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BezierLerp_00000343$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BezierLerp_00000344$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BezierLerp_00000343$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BezierLerp_00000344$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/BezierLerp_00000343$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/BezierLerp_00000343$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/BezierLerp_00000344$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/BezierLerp_00000344$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/BounceOutLerp_00000346$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/BounceOutLerp_00000346$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/BounceOutLerp_00000347$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/BounceOutLerp_00000347$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/SingleBounceOutLerp_0000034A$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/SingleBounceOutLerp_0000034A$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/SingleBounceOutLerp_0000034B$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstLerpUtility/SingleBounceOutLerp_0000034B$PostfixBurstDelegate");
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility
class CORDL_TYPE BurstLerpUtility : public ::System::Object {
public:
// Declarations
using BezierLerp_00000343$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$BurstDirectCall;

using BezierLerp_00000343$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate;

using BezierLerp_00000344$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$BurstDirectCall;

using BezierLerp_00000344$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate;

using BounceOutLerp_00000346$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall;

using BounceOutLerp_00000346$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate;

using BounceOutLerp_00000347$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall;

using BounceOutLerp_00000347$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate;

using SingleBounceOutLerp_0000034A$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall;

using SingleBounceOutLerp_0000034A$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate;

using SingleBounceOutLerp_0000034B$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall;

using SingleBounceOutLerp_0000034B$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate;

/// @brief Method BezierLerp, addr 0xb41d99c, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 BezierLerp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  start, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  end, float_t  t, float_t  controlHeightFactor) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility::BezierLerp_00000344$PostfixBurstDelegate))]
/// @brief Method BezierLerp, addr 0xb41d988, size 0x4, virtual false, abstract: false, final false
static inline float_t BezierLerp(float_t  start, float_t  end, float_t  t, float_t  controlHeightFactor) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility::BezierLerp_00000343$PostfixBurstDelegate))]
/// @brief Method BezierLerp, addr 0xb41d984, size 0x4, virtual false, abstract: false, final false
static inline void BezierLerp(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  controlHeightFactor) ;

/// [BurstCompile]
/// @brief Method BezierLerp$BurstManaged, addr 0xb41e324, size 0x48, virtual false, abstract: false, final false
static inline float_t BezierLerp$BurstManaged(float_t  start, float_t  end, float_t  t, float_t  controlHeightFactor) ;

/// [BurstCompile]
/// @brief Method BezierLerp$BurstManaged, addr 0xb41e2c0, size 0x64, virtual false, abstract: false, final false
static inline void BezierLerp$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  controlHeightFactor) ;

/// @brief Method BounceOutLerp, addr 0xb41dc4c, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 BounceOutLerp(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  t, float_t  speed) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility::BounceOutLerp_00000347$PostfixBurstDelegate))]
/// @brief Method BounceOutLerp, addr 0xb41d990, size 0x4, virtual false, abstract: false, final false
static inline float_t BounceOutLerp(float_t  start, float_t  end, float_t  t, float_t  speed) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility::BounceOutLerp_00000346$PostfixBurstDelegate))]
/// @brief Method BounceOutLerp, addr 0xb41d98c, size 0x4, virtual false, abstract: false, final false
static inline void BounceOutLerp(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed) ;

/// [BurstCompile]
/// @brief Method BounceOutLerp$BurstManaged, addr 0xb41e3c8, size 0x34, virtual false, abstract: false, final false
static inline float_t BounceOutLerp$BurstManaged(float_t  start, float_t  end, float_t  t, float_t  speed) ;

/// [BurstCompile]
/// @brief Method BounceOutLerp$BurstManaged, addr 0xb41e36c, size 0x5c, virtual false, abstract: false, final false
static inline void BounceOutLerp$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed) ;

/// @brief Method EaseOutBounce, addr 0xb41decc, size 0xd8, virtual false, abstract: false, final false
static inline float_t EaseOutBounce(float_t  t, float_t  speed) ;

/// @brief Method EaseOutBounceSingle, addr 0xb41e224, size 0x9c, virtual false, abstract: false, final false
static inline float_t EaseOutBounceSingle(float_t  t, float_t  speed) ;

/// @brief Method SingleBounceOutLerp, addr 0xb41dfa4, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SingleBounceOutLerp(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  t, float_t  speed) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility::SingleBounceOutLerp_0000034B$PostfixBurstDelegate))]
/// @brief Method SingleBounceOutLerp, addr 0xb41d998, size 0x4, virtual false, abstract: false, final false
static inline float_t SingleBounceOutLerp(float_t  start, float_t  end, float_t  t, float_t  speed) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility::SingleBounceOutLerp_0000034A$PostfixBurstDelegate))]
/// @brief Method SingleBounceOutLerp, addr 0xb41d994, size 0x4, virtual false, abstract: false, final false
static inline void SingleBounceOutLerp(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed) ;

/// [BurstCompile]
/// @brief Method SingleBounceOutLerp$BurstManaged, addr 0xb41e458, size 0x34, virtual false, abstract: false, final false
static inline float_t SingleBounceOutLerp$BurstManaged(float_t  start, float_t  end, float_t  t, float_t  speed) ;

/// [BurstCompile]
/// @brief Method SingleBounceOutLerp$BurstManaged, addr 0xb41e3fc, size 0x5c, virtual false, abstract: false, final false
static inline void SingleBounceOutLerp$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility(BurstLerpUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility(BurstLerpUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/SingleBounceOutLerp_0000034B$BurstDirectCall
class CORDL_TYPE BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb41f4c4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb41f3d4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41e15c, size 0xc8, virtual false, abstract: false, final false
static inline float_t Invoke(float_t  start, float_t  end, float_t  t, float_t  speed) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall(BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall(BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11155};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/SingleBounceOutLerp_0000034B$PostfixBurstDelegate
class CORDL_TYPE BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb41f300, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  start, float_t  end, float_t  t, float_t  speed, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0xb41f3ac, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41f2ec, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(float_t  start, float_t  end, float_t  t, float_t  speed) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb41f24c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate(BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate(BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11154};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034B$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/SingleBounceOutLerp_0000034A$BurstDirectCall
class CORDL_TYPE BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb41f234, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb41f144, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41e050, size 0x10c, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall(BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall(BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/SingleBounceOutLerp_0000034A$PostfixBurstDelegate
class CORDL_TYPE BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb41f034, size 0x104, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb41f138, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41f020, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb41ef6c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate(BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate(BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11152};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_SingleBounceOutLerp_0000034A$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/BounceOutLerp_00000347$BurstDirectCall
class CORDL_TYPE BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb41ef54, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb41ee64, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41de04, size 0xc8, virtual false, abstract: false, final false
static inline float_t Invoke(float_t  start, float_t  end, float_t  t, float_t  speed) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall(BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall(BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11151};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/BounceOutLerp_00000347$PostfixBurstDelegate
class CORDL_TYPE BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb41ed90, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  start, float_t  end, float_t  t, float_t  speed, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0xb41ee3c, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41ed7c, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(float_t  start, float_t  end, float_t  t, float_t  speed) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb41ecdc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate(BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate(BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11150};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000347$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/BounceOutLerp_00000346$BurstDirectCall
class CORDL_TYPE BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb41ecc4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb41ebd4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41dcf8, size 0x10c, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall(BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall(BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/BounceOutLerp_00000346$PostfixBurstDelegate
class CORDL_TYPE BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb41eac4, size 0x104, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb41ebc8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41eab0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  speed) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb41e9fc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate(BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate(BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BounceOutLerp_00000346$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/BezierLerp_00000344$BurstDirectCall
class CORDL_TYPE BurstLerpUtility_BezierLerp_00000344$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb41e9e4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb41e8f4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41db58, size 0xf4, virtual false, abstract: false, final false
static inline float_t Invoke(float_t  start, float_t  end, float_t  t, float_t  controlHeightFactor) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_BezierLerp_00000344$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BezierLerp_00000344$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_BezierLerp_00000344$BurstDirectCall(BurstLerpUtility_BezierLerp_00000344$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BezierLerp_00000344$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_BezierLerp_00000344$BurstDirectCall(BurstLerpUtility_BezierLerp_00000344$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/BezierLerp_00000344$PostfixBurstDelegate
class CORDL_TYPE BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb41e820, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  start, float_t  end, float_t  t, float_t  controlHeightFactor, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0xb41e8cc, size 0x28, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41e80c, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(float_t  start, float_t  end, float_t  t, float_t  controlHeightFactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb41e76c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate(BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate(BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000344$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/BezierLerp_00000343$BurstDirectCall
class CORDL_TYPE BurstLerpUtility_BezierLerp_00000343$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb41e754, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb41e664, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41da38, size 0x120, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  controlHeightFactor) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_BezierLerp_00000343$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BezierLerp_00000343$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_BezierLerp_00000343$BurstDirectCall(BurstLerpUtility_BezierLerp_00000343$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BezierLerp_00000343$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_BezierLerp_00000343$BurstDirectCall(BurstLerpUtility_BezierLerp_00000343$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstLerpUtility/BezierLerp_00000343$PostfixBurstDelegate
class CORDL_TYPE BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb41e554, size 0x104, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  controlHeightFactor, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb41e658, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb41e540, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  start, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  end, float_t  t, ::by_ref<::Unity::Mathematics::float3>  result, float_t  controlHeightFactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb41e48c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate(BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate(BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstLerpUtility_BezierLerp_00000343$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
