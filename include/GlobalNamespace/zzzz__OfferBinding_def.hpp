#pragma once
// IWYU pragma private; include "GlobalNamespace/OfferBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OfferBinding)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
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
class OfferBinding;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OfferBinding*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OfferBinding*, "", "OfferBinding");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: OfferBinding
class CORDL_TYPE OfferBinding : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_committed, put=set_committed)) bool  committed;

/// @brief Field committed_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_committed_name, put=setStaticF_committed_name)) ::StringW  committed_name;

 __declspec(property(get=get_deployment_id, put=set_deployment_id)) ::StringW  deployment_id;

/// @brief Field deployment_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deployment_id_name, put=setStaticF_deployment_id_name)) ::StringW  deployment_id_name;

 __declspec(property(get=get_display_index, put=set_display_index)) int32_t  display_index;

/// @brief Field display_index_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_display_index_name, put=setStaticF_display_index_name)) ::StringW  display_index_name;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field env_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_env_id_name, put=setStaticF_env_id_name)) ::StringW  env_id_name;

 __declspec(property(get=get_offer_binding_id, put=set_offer_binding_id)) ::StringW  offer_binding_id;

/// @brief Field offer_binding_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_binding_id_name, put=setStaticF_offer_binding_id_name)) ::StringW  offer_binding_id_name;

 __declspec(property(get=get_offer_display_id, put=set_offer_display_id)) ::StringW  offer_display_id;

/// @brief Field offer_display_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_display_id_name, put=setStaticF_offer_display_id_name)) ::StringW  offer_display_id_name;

 __declspec(property(get=get_offer_id, put=set_offer_id)) ::StringW  offer_id;

/// @brief Field offer_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_id_name, put=setStaticF_offer_id_name)) ::StringW  offer_id_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Field title_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title_id_name, put=setStaticF_title_id_name)) ::StringW  title_id_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52dc42c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52dc528, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52dc498, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::OfferBinding* New_ctor() ;

static inline ::GlobalNamespace::OfferBinding* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x52dd3d4, size 0xfc, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52dd4d0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52dc2f4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52dc354, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::OfferBinding*  obj) ;

static inline ::StringW getStaticF_committed_name() ;

static inline ::StringW getStaticF_deployment_id_name() ;

static inline ::StringW getStaticF_display_index_name() ;

static inline ::StringW getStaticF_env_id_name() ;

static inline ::StringW getStaticF_offer_binding_id_name() ;

static inline ::StringW getStaticF_offer_display_id_name() ;

static inline ::StringW getStaticF_offer_id_name() ;

static inline ::StringW getStaticF_title_id_name() ;

/// @brief Method get_committed, addr 0x52dd154, size 0xd4, virtual false, abstract: false, final false
inline bool get_committed() ;

/// @brief Method get_deployment_id, addr 0x52dcc50, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_id() ;

/// @brief Method get_display_index, addr 0x52dd300, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_display_index() ;

/// @brief Method get_env_id, addr 0x52dcaa4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_offer_binding_id, addr 0x52dc74c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_binding_id() ;

/// @brief Method get_offer_display_id, addr 0x52dcdfc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_display_id() ;

/// @brief Method get_offer_id, addr 0x52dcfa8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_id() ;

/// @brief Method get_title_id, addr 0x52dc8f8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_committed_name(::StringW  value) ;

static inline void setStaticF_deployment_id_name(::StringW  value) ;

static inline void setStaticF_display_index_name(::StringW  value) ;

static inline void setStaticF_env_id_name(::StringW  value) ;

static inline void setStaticF_offer_binding_id_name(::StringW  value) ;

static inline void setStaticF_offer_display_id_name(::StringW  value) ;

static inline void setStaticF_offer_id_name(::StringW  value) ;

static inline void setStaticF_title_id_name(::StringW  value) ;

/// @brief Method set_committed, addr 0x52dd07c, size 0xd8, virtual false, abstract: false, final false
inline void set_committed(bool  value) ;

/// @brief Method set_deployment_id, addr 0x52dcb78, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_id(::StringW  value) ;

/// @brief Method set_display_index, addr 0x52dd228, size 0xd8, virtual false, abstract: false, final false
inline void set_display_index(int32_t  value) ;

/// @brief Method set_env_id, addr 0x52dc9cc, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_offer_binding_id, addr 0x52dc674, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_binding_id(::StringW  value) ;

/// @brief Method set_offer_display_id, addr 0x52dcd24, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_display_id(::StringW  value) ;

/// @brief Method set_offer_id, addr 0x52dced0, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52dc820, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52dc394, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::OfferBinding*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OfferBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OfferBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OfferBinding(OfferBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OfferBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OfferBinding(OfferBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9402};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OfferBinding, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfferBinding, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OfferBinding) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
