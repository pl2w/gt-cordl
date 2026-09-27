#pragma once
// IWYU pragma private; include "GlobalNamespace/HydratedProgressionNodeCost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HydratedProgressionNodeCost)
namespace GlobalNamespace {
class HydratedInventoryChangeMap;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Document;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Value;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class HydratedProgressionNodeCost;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HydratedProgressionNodeCost*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HydratedProgressionNodeCost*, "", "HydratedProgressionNodeCost");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: HydratedProgressionNodeCost
class CORDL_TYPE HydratedProgressionNodeCost : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_items, put=set_items)) ::GlobalNamespace::HydratedInventoryChangeMap*  items;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5437c48, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5437d44, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5437cb4, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::HydratedProgressionNodeCost* New_ctor() ;

static inline ::GlobalNamespace::HydratedProgressionNodeCost* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x5438084, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

/// @brief Method ToJson, addr 0x5438168, size 0x124, virtual false, abstract: false, final false
inline bool ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*  nodeCost, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5438360, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5437b10, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5437b70, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::HydratedProgressionNodeCost*  obj) ;

/// @brief Method get_items, addr 0x5437f7c, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::HydratedInventoryChangeMap* get_items() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method isEmpty, addr 0x543828c, size 0xd4, virtual false, abstract: false, final false
inline bool isEmpty() ;

/// @brief Method set_items, addr 0x5437e90, size 0xec, virtual false, abstract: false, final false
inline void set_items(::GlobalNamespace::HydratedInventoryChangeMap*  value) ;

/// @brief Method swigRelease, addr 0x5437bb0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::HydratedProgressionNodeCost*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HydratedProgressionNodeCost() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HydratedProgressionNodeCost", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HydratedProgressionNodeCost(HydratedProgressionNodeCost && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HydratedProgressionNodeCost", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HydratedProgressionNodeCost(HydratedProgressionNodeCost const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9126};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HydratedProgressionNodeCost, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HydratedProgressionNodeCost, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HydratedProgressionNodeCost) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
