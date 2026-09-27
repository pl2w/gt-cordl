#pragma once
// IWYU pragma private; include "GlobalNamespace/OfferDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OfferDisplay)
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
class OfferDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OfferDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OfferDisplay*, "", "OfferDisplay");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: OfferDisplay
class CORDL_TYPE OfferDisplay : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field env_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_env_id_name, put=setStaticF_env_id_name)) ::StringW  env_id_name;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field name_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_name_name, put=setStaticF_name_name)) ::StringW  name_name;

 __declspec(property(get=get_offer_display_id, put=set_offer_display_id)) ::StringW  offer_display_id;

/// @brief Field offer_display_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_display_id_name, put=setStaticF_offer_display_id_name)) ::StringW  offer_display_id_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Field title_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title_id_name, put=setStaticF_title_id_name)) ::StringW  title_id_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52e6650, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52e674c, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52e66bc, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::OfferDisplay* New_ctor() ;

static inline ::GlobalNamespace::OfferDisplay* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x52e6f48, size 0xfc, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52e7044, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52e6518, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52e6578, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::OfferDisplay*  obj) ;

static inline ::StringW getStaticF_env_id_name() ;

static inline ::StringW getStaticF_name_name() ;

static inline ::StringW getStaticF_offer_display_id_name() ;

static inline ::StringW getStaticF_title_id_name() ;

/// @brief Method get_env_id, addr 0x52e6cc8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_name, addr 0x52e6e74, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_offer_display_id, addr 0x52e6970, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_display_id() ;

/// @brief Method get_title_id, addr 0x52e6b1c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_env_id_name(::StringW  value) ;

static inline void setStaticF_name_name(::StringW  value) ;

static inline void setStaticF_offer_display_id_name(::StringW  value) ;

static inline void setStaticF_title_id_name(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52e6bf0, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_name, addr 0x52e6d9c, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_offer_display_id, addr 0x52e6898, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_display_id(::StringW  value) ;

/// @brief Method set_title_id, addr 0x52e6a44, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52e65b8, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::OfferDisplay*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OfferDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OfferDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OfferDisplay(OfferDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OfferDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OfferDisplay(OfferDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9410};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OfferDisplay, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfferDisplay, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OfferDisplay) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
