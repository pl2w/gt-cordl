#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/BurstPhysicsUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BurstPhysicsUtils)
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
class BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils/GetConecastOffset_00000362$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils/GetConecastOffset_00000362$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils/GetConecastParameters_00000360$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils/GetConecastParameters_00000360$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils/GetMultiSegmentConecastParameters_00000361$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils/GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils/GetSphereOverlapParameters_0000035F$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "BurstPhysicsUtils/GetSphereOverlapParameters_0000035F$PostfixBurstDelegate");
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils
class CORDL_TYPE BurstPhysicsUtils : public ::System::Object {
public:
// Declarations
using GetConecastOffset_00000362$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall;

using GetConecastOffset_00000362$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate;

using GetConecastParameters_00000360$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall;

using GetConecastParameters_00000360$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate;

using GetMultiSegmentConecastParameters_00000361$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall;

using GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate;

using GetSphereOverlapParameters_0000035F$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall;

using GetSphereOverlapParameters_0000035F$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils::GetConecastOffset_00000362$PostfixBurstDelegate))]
/// @brief Method GetConecastOffset, addr 0xb423d1c, size 0x4, virtual false, abstract: false, final false
static inline void GetConecastOffset(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset) ;

/// [BurstCompile]
/// @brief Method GetConecastOffset$BurstManaged, addr 0xb424504, size 0xc0, virtual false, abstract: false, final false
static inline void GetConecastOffset$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils::GetConecastParameters_00000360$PostfixBurstDelegate))]
/// @brief Method GetConecastParameters, addr 0xb423d14, size 0x4, virtual false, abstract: false, final false
static inline void GetConecastParameters(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax) ;

/// [BurstCompile]
/// @brief Method GetConecastParameters$BurstManaged, addr 0xb42440c, size 0x60, virtual false, abstract: false, final false
static inline void GetConecastParameters$BurstManaged(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils::GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate))]
/// @brief Method GetMultiSegmentConecastParameters, addr 0xb423d18, size 0x4, virtual false, abstract: false, final false
static inline void GetMultiSegmentConecastParameters(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax) ;

/// [BurstCompile]
/// @brief Method GetMultiSegmentConecastParameters$BurstManaged, addr 0xb42446c, size 0x98, virtual false, abstract: false, final false
static inline void GetMultiSegmentConecastParameters$BurstManaged(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils::GetSphereOverlapParameters_0000035F$PostfixBurstDelegate))]
/// @brief Method GetSphereOverlapParameters, addr 0xb423d10, size 0x4, virtual false, abstract: false, final false
static inline void GetSphereOverlapParameters(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance) ;

/// [BurstCompile]
/// @brief Method GetSphereOverlapParameters$BurstManaged, addr 0xb4242f8, size 0x114, virtual false, abstract: false, final false
static inline void GetSphereOverlapParameters$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils(BurstPhysicsUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils(BurstPhysicsUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11200};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils/GetConecastOffset_00000362$BurstDirectCall
class CORDL_TYPE BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb425168, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb425078, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb424194, size 0x164, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall(BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall(BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11199};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils/GetConecastOffset_00000362$PostfixBurstDelegate
class CORDL_TYPE BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb424f80, size 0xec, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0xb42506c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb424f6c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  conePoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, ::by_ref<float_t>  coneOffset) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb424eb8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate(BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate(BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11198};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastOffset_00000362$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils/GetMultiSegmentConecastParameters_00000361$BurstDirectCall
class CORDL_TYPE BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb424ea0, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb424db0, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb424018, size 0x17c, virtual false, abstract: false, final false
static inline void Invoke(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall(BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall(BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils/GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate
class CORDL_TYPE BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb424c58, size 0x14c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_9) ;

/// @brief Method EndInvoke, addr 0xb424da4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb424c44, size 0x14, virtual true, abstract: false, final false
inline void Invoke(float_t  angleRadius, float_t  segmentOffset, float_t  offsetFromOrigin, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb424ba4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate(BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate(BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils/GetConecastParameters_00000360$BurstDirectCall
class CORDL_TYPE BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb424b8c, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb424a9c, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb423ed0, size 0x148, virtual false, abstract: false, final false
static inline void Invoke(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall(BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall(BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11195};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils/GetConecastParameters_00000360$PostfixBurstDelegate
class CORDL_TYPE BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb424960, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method EndInvoke, addr 0xb424a90, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42494c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(float_t  angleRadius, float_t  offset, float_t  maxOffset, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Vector3>  originOffset, ::by_ref<float_t>  radius, ::by_ref<float_t>  castMax) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4248ac, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate(BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate(BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetConecastParameters_00000360$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils/GetSphereOverlapParameters_0000035F$BurstDirectCall
class CORDL_TYPE BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb424894, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb4247a4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb423d20, size 0x1b0, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall(BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall(BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11193};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.BurstPhysicsUtils/GetSphereOverlapParameters_0000035F$PostfixBurstDelegate
class CORDL_TYPE BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42468c, size 0x10c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0xb424798, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb424678, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapStart, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  overlapEnd, ::by_ref<::UnityEngine::Vector3>  normalizedOverlapVector, ::by_ref<float_t>  overlapSqrMagnitude, ::by_ref<float_t>  overlapDistance) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb4245c4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate(BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate(BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11192};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BurstPhysicsUtils_GetSphereOverlapParameters_0000035F$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
