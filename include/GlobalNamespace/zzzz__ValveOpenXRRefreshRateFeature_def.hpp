#pragma once
// IWYU pragma private; include "GlobalNamespace/ValveOpenXRRefreshRateFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ValveOpenXRRefreshRateFeature)
namespace GlobalNamespace {
class OnRefreshRateFeatureAvailableDelegate;
}
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB;
}
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB;
}
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr;
}
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
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
// Forward declare root types
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature;
}
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB;
}
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB;
}
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr;
}
namespace GlobalNamespace {
class ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ValveOpenXRRefreshRateFeature*);
MARK_REF_T(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*);
MARK_REF_T(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*);
MARK_REF_T(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*);
MARK_REF_T(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValveOpenXRRefreshRateFeature*, "", "ValveOpenXRRefreshRateFeature");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*, "", "ValveOpenXRRefreshRateFeature/Type_xrEnumerateDisplayRefreshRatesFB");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*, "", "ValveOpenXRRefreshRateFeature/Type_xrGetDisplayRefreshRateFB");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*, "", "ValveOpenXRRefreshRateFeature/Type_xrGetInstanceProcAddr");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*, "", "ValveOpenXRRefreshRateFeature/Type_xrRequestDisplayRefreshRateFB");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: ValveOpenXRRefreshRateFeature
class CORDL_TYPE ValveOpenXRRefreshRateFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
using Type_xrEnumerateDisplayRefreshRatesFB = ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB;

using Type_xrGetDisplayRefreshRateFB = ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB;

using Type_xrGetInstanceProcAddr = ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr;

using Type_xrRequestDisplayRefreshRateFB = ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB;

/// @brief Field OnRefreshRateFeatureAvailable, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRefreshRateFeatureAvailable, put=__cordl_internal_set_OnRefreshRateFeatureAvailable)) ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*  OnRefreshRateFeatureAvailable;

/// @brief Field _initialized, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

 __declspec(property(get=get_initialized)) bool  initialized;

/// @brief Field instanceHandle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceHandle, put=__cordl_internal_set_instanceHandle)) uint64_t  instanceHandle;

/// @brief Field sessionHandle, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionHandle, put=__cordl_internal_set_sessionHandle)) uint64_t  sessionHandle;

/// @brief Field xrEnumerateDisplayRefreshRatesFB, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_xrEnumerateDisplayRefreshRatesFB, put=__cordl_internal_set_xrEnumerateDisplayRefreshRatesFB)) ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*  xrEnumerateDisplayRefreshRatesFB;

/// @brief Field xrGetDisplayRefreshRateFB, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_xrGetDisplayRefreshRateFB, put=__cordl_internal_set_xrGetDisplayRefreshRateFB)) ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*  xrGetDisplayRefreshRateFB;

/// @brief Field xrGetInstanceProcAddrDelegate, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_xrGetInstanceProcAddrDelegate, put=__cordl_internal_set_xrGetInstanceProcAddrDelegate)) ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*  xrGetInstanceProcAddrDelegate;

/// @brief Field xrRequestDisplayRefreshRateFB, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_xrRequestDisplayRefreshRateFB, put=__cordl_internal_set_xrRequestDisplayRefreshRateFB)) ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*  xrRequestDisplayRefreshRateFB;

/// @brief Method EnumerateRefreshRates, addr 0xb939e08, size 0x240, virtual false, abstract: false, final false
inline int32_t EnumerateRefreshRates(::by_ref<::System::Collections::Generic::List_1<float_t>*>  displayRefreshRates) ;

/// @brief Method GetRefreshRate, addr 0xb939ab4, size 0x1a8, virtual false, abstract: false, final false
inline float_t GetRefreshRate() ;

/// @brief Method InitializeFunctions, addr 0xb93965c, size 0x3e8, virtual false, abstract: false, final false
inline void InitializeFunctions() ;

static inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature* New_ctor() ;

/// @brief Method OnInstanceCreate, addr 0xb939490, size 0x8c, virtual true, abstract: false, final false
inline bool OnInstanceCreate(uint64_t  xrInstance) ;

/// @brief Method OnSessionBegin, addr 0xb93951c, size 0x140, virtual true, abstract: false, final false
inline void OnSessionBegin(uint64_t  xrSession) ;

/// @brief Method OnSessionDestroy, addr 0xb939a44, size 0x38, virtual true, abstract: false, final false
inline void OnSessionDestroy(uint64_t  xrSession) ;

/// @brief Method OnSessionEnd, addr 0xb939a7c, size 0x38, virtual true, abstract: false, final false
inline void OnSessionEnd(uint64_t  xrSession) ;

/// @brief Method SetRefreshRate, addr 0xb939c5c, size 0x1ac, virtual false, abstract: false, final false
inline int32_t SetRefreshRate(float_t  refreshrate) ;

constexpr ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate* const& __cordl_internal_get_OnRefreshRateFeatureAvailable() const;

constexpr ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*& __cordl_internal_get_OnRefreshRateFeatureAvailable() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr uint64_t const& __cordl_internal_get_instanceHandle() const;

constexpr uint64_t& __cordl_internal_get_instanceHandle() ;

constexpr uint64_t const& __cordl_internal_get_sessionHandle() const;

constexpr uint64_t& __cordl_internal_get_sessionHandle() ;

constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB* const& __cordl_internal_get_xrEnumerateDisplayRefreshRatesFB() const;

constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*& __cordl_internal_get_xrEnumerateDisplayRefreshRatesFB() ;

constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB* const& __cordl_internal_get_xrGetDisplayRefreshRateFB() const;

constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*& __cordl_internal_get_xrGetDisplayRefreshRateFB() ;

constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr* const& __cordl_internal_get_xrGetInstanceProcAddrDelegate() const;

constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*& __cordl_internal_get_xrGetInstanceProcAddrDelegate() ;

constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB* const& __cordl_internal_get_xrRequestDisplayRefreshRateFB() const;

constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*& __cordl_internal_get_xrRequestDisplayRefreshRateFB() ;

constexpr void __cordl_internal_set_OnRefreshRateFeatureAvailable(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set_instanceHandle(uint64_t  value) ;

constexpr void __cordl_internal_set_sessionHandle(uint64_t  value) ;

constexpr void __cordl_internal_set_xrEnumerateDisplayRefreshRatesFB(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*  value) ;

constexpr void __cordl_internal_set_xrGetDisplayRefreshRateFB(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*  value) ;

constexpr void __cordl_internal_set_xrGetInstanceProcAddrDelegate(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*  value) ;

constexpr void __cordl_internal_set_xrRequestDisplayRefreshRateFB(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*  value) ;

/// @brief Method .ctor, addr 0xb93a048, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnRefreshRateFeatureAvailable, addr 0xb939358, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRefreshRateFeatureAvailable(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*  value) ;

/// @brief Method get_initialized, addr 0xb939350, size 0x8, virtual false, abstract: false, final false
inline bool get_initialized() ;

/// [CompilerGenerated]
/// @brief Method remove_OnRefreshRateFeatureAvailable, addr 0xb9393f4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRefreshRateFeatureAvailable(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRRefreshRateFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRRefreshRateFeature(ValveOpenXRRefreshRateFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRRefreshRateFeature(ValveOpenXRRefreshRateFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31825};

/// @brief Field featureId offset 0xffffffff size 0x8
static constexpr ::ConstString  featureId{u"com.valve.openxr.refreshrate"};

/// @brief Field _initialized, offset: 0x4e, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field instanceHandle, offset: 0x50, size: 0x8, def value: None
 uint64_t  ___instanceHandle;

/// @brief Field sessionHandle, offset: 0x58, size: 0x8, def value: None
 uint64_t  ___sessionHandle;

/// @brief Field xrGetInstanceProcAddrDelegate, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*  ___xrGetInstanceProcAddrDelegate;

/// @brief Field xrGetDisplayRefreshRateFB, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*  ___xrGetDisplayRefreshRateFB;

/// @brief Field xrRequestDisplayRefreshRateFB, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*  ___xrRequestDisplayRefreshRateFB;

/// @brief Field xrEnumerateDisplayRefreshRatesFB, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*  ___xrEnumerateDisplayRefreshRatesFB;

/// [CompilerGenerated]
/// @brief Field OnRefreshRateFeatureAvailable, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*  ___OnRefreshRateFeatureAvailable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ValveOpenXRRefreshRateFeature, ____initialized) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRRefreshRateFeature, ___instanceHandle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRRefreshRateFeature, ___sessionHandle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRRefreshRateFeature, ___xrGetInstanceProcAddrDelegate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRRefreshRateFeature, ___xrGetDisplayRefreshRateFB) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRRefreshRateFeature, ___xrRequestDisplayRefreshRateFB) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRRefreshRateFeature, ___xrEnumerateDisplayRefreshRatesFB) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ValveOpenXRRefreshRateFeature, ___OnRefreshRateFeatureAvailable) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ValveOpenXRRefreshRateFeature) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ValveOpenXRRefreshRateFeature/Type_xrEnumerateDisplayRefreshRatesFB
class CORDL_TYPE ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb93a528, size 0xa4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  session, uint32_t  displayRefreshRateCapacityInput, ::by_ref<uint32_t>  displayRefreshRateCountOutput, ::by_ref<::ArrayW<float_t>>  displayRefreshRates, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb93a5cc, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::by_ref<uint32_t>  displayRefreshRateCountOutput, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb93a514, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(uint64_t  session, uint32_t  displayRefreshRateCapacityInput, ::by_ref<uint32_t>  displayRefreshRateCountOutput, ::by_ref<::ArrayW<float_t>>  displayRefreshRates) ;

static inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb93a474, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB(ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB(ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ValveOpenXRRefreshRateFeature/Type_xrRequestDisplayRefreshRateFB
class CORDL_TYPE ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb93a3d0, size 0x7c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  session, float_t  displayRefreshRate, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb93a44c, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb93a3bc, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(uint64_t  session, float_t  displayRefreshRate) ;

static inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb93a31c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB(ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB(ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ValveOpenXRRefreshRateFeature/Type_xrGetDisplayRefreshRateFB
class CORDL_TYPE ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb93a274, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  session, ::by_ref<float_t>  displayRefreshRate, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb93a2f4, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::by_ref<float_t>  displayRefreshRate, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb93a260, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(uint64_t  session, ::by_ref<float_t>  displayRefreshRate) ;

static inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb93a1c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB(ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB(ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ValveOpenXRRefreshRateFeature/Type_xrGetInstanceProcAddr
class CORDL_TYPE ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb93a10c, size 0x8c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  instance, ::StringW  name, ::by_ref<::System::IntPtr>  function, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb93a198, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::by_ref<::System::IntPtr>  function, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb93a0f8, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(uint64_t  instance, ::StringW  name, ::by_ref<::System::IntPtr>  function) ;

static inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb93a058, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr(ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr(ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
