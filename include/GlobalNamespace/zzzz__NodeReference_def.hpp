#pragma once
// IWYU pragma private; include "GlobalNamespace/NodeReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NodeReference)
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
class NodeReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NodeReference*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NodeReference*, "", "NodeReference");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: NodeReference
class CORDL_TYPE NodeReference : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_node_id, put=set_node_id)) ::StringW  node_id;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52d75dc, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52d76d8, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52d7648, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::NodeReference* New_ctor() ;

static inline ::GlobalNamespace::NodeReference* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52d79d0, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

/// @brief Method ToJson, addr 0x52d7ab4, size 0x124, virtual false, abstract: false, final false
inline bool ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*  nodeRef, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document*  body) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52d7bd8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52d74a4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52d7504, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::NodeReference*  obj) ;

/// @brief Method get_node_id, addr 0x52d78fc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_node_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_node_id, addr 0x52d7824, size 0xd8, virtual false, abstract: false, final false
inline void set_node_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52d7544, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::NodeReference*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeReference(NodeReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeReference(NodeReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9393};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NodeReference, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodeReference, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NodeReference) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
