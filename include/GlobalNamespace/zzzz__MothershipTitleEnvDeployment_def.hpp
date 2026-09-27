#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipTitleEnvDeployment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipTitleEnvDeployment)
namespace GlobalNamespace {
class StringVector;
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
class MothershipTitleEnvDeployment;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipTitleEnvDeployment*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipTitleEnvDeployment*, "", "MothershipTitleEnvDeployment");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipTitleEnvDeployment
class CORDL_TYPE MothershipTitleEnvDeployment : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_deployment_id, put=set_deployment_id)) ::StringW  deployment_id;

 __declspec(property(get=get_deployment_name, put=set_deployment_name)) ::StringW  deployment_name;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_required_player_tags, put=set_required_player_tags)) ::GlobalNamespace::StringVector*  required_player_tags;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52c6df8, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52c6ef4, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52c6e64, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipTitleEnvDeployment* New_ctor() ;

static inline ::GlobalNamespace::MothershipTitleEnvDeployment* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52c78ec, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52c79d0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52c6cc0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52c6d20, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipTitleEnvDeployment*  obj) ;

/// @brief Method get_deployment_id, addr 0x52c7118, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_id() ;

/// @brief Method get_deployment_name, addr 0x52c72c4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_deployment_name() ;

/// @brief Method get_env_id, addr 0x52c7470, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_required_player_tags, addr 0x52c77e0, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_required_player_tags() ;

/// @brief Method get_title_id, addr 0x52c761c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_deployment_id, addr 0x52c7040, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_id(::StringW  value) ;

/// @brief Method set_deployment_name, addr 0x52c71ec, size 0xd8, virtual false, abstract: false, final false
inline void set_deployment_name(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52c7398, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_required_player_tags, addr 0x52c76f0, size 0xf0, virtual false, abstract: false, final false
inline void set_required_player_tags(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_title_id, addr 0x52c7544, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52c6d60, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipTitleEnvDeployment*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipTitleEnvDeployment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipTitleEnvDeployment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipTitleEnvDeployment(MothershipTitleEnvDeployment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipTitleEnvDeployment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipTitleEnvDeployment(MothershipTitleEnvDeployment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9372};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipTitleEnvDeployment, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipTitleEnvDeployment, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipTitleEnvDeployment) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
