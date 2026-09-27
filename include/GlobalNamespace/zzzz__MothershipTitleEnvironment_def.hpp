#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipTitleEnvironment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipTitleEnvironment)
namespace GlobalNamespace {
class InsecureProviderConfig;
}
namespace GlobalNamespace {
class QuestAuthProviderConfig;
}
namespace GlobalNamespace {
class RiftAuthProviderConfig;
}
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
class MothershipTitleEnvironment;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipTitleEnvironment*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipTitleEnvironment*, "", "MothershipTitleEnvironment");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipTitleEnvironment
class CORDL_TYPE MothershipTitleEnvironment : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_env_name, put=set_env_name)) ::StringW  env_name;

 __declspec(property(get=get_insecure_auth_provider_1_config, put=set_insecure_auth_provider_1_config)) ::GlobalNamespace::InsecureProviderConfig*  insecure_auth_provider_1_config;

 __declspec(property(get=get_insecure_auth_provider_2_config, put=set_insecure_auth_provider_2_config)) ::GlobalNamespace::InsecureProviderConfig*  insecure_auth_provider_2_config;

 __declspec(property(get=get_quest_auth_provider_config, put=set_quest_auth_provider_config)) ::GlobalNamespace::QuestAuthProviderConfig*  quest_auth_provider_config;

 __declspec(property(get=get_required_player_tags, put=set_required_player_tags)) ::GlobalNamespace::StringVector*  required_player_tags;

 __declspec(property(get=get_rift_auth_provider_config, put=set_rift_auth_provider_config)) ::GlobalNamespace::RiftAuthProviderConfig*  rift_auth_provider_config;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52c7bd4, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52c7cd0, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52c7c40, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipTitleEnvironment* New_ctor() ;

static inline ::GlobalNamespace::MothershipTitleEnvironment* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromString, addr 0x52c8d0c, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  response) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52c8df0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52c7a9c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52c7afc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipTitleEnvironment*  obj) ;

/// @brief Method get_env_id, addr 0x52c7ef4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_env_name, addr 0x52c80a0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_name() ;

/// @brief Method get_insecure_auth_provider_1_config, addr 0x52c8410, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InsecureProviderConfig* get_insecure_auth_provider_1_config() ;

/// @brief Method get_insecure_auth_provider_2_config, addr 0x52c860c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InsecureProviderConfig* get_insecure_auth_provider_2_config() ;

/// @brief Method get_quest_auth_provider_config, addr 0x52c8808, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::QuestAuthProviderConfig* get_quest_auth_provider_config() ;

/// @brief Method get_required_player_tags, addr 0x52c8c00, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_required_player_tags() ;

/// @brief Method get_rift_auth_provider_config, addr 0x52c8a04, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RiftAuthProviderConfig* get_rift_auth_provider_config() ;

/// @brief Method get_title_id, addr 0x52c824c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_env_id, addr 0x52c7e1c, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_env_name, addr 0x52c7fc8, size 0xd8, virtual false, abstract: false, final false
inline void set_env_name(::StringW  value) ;

/// @brief Method set_insecure_auth_provider_1_config, addr 0x52c8320, size 0xf0, virtual false, abstract: false, final false
inline void set_insecure_auth_provider_1_config(::GlobalNamespace::InsecureProviderConfig*  value) ;

/// @brief Method set_insecure_auth_provider_2_config, addr 0x52c851c, size 0xf0, virtual false, abstract: false, final false
inline void set_insecure_auth_provider_2_config(::GlobalNamespace::InsecureProviderConfig*  value) ;

/// @brief Method set_quest_auth_provider_config, addr 0x52c8718, size 0xf0, virtual false, abstract: false, final false
inline void set_quest_auth_provider_config(::GlobalNamespace::QuestAuthProviderConfig*  value) ;

/// @brief Method set_required_player_tags, addr 0x52c8b10, size 0xf0, virtual false, abstract: false, final false
inline void set_required_player_tags(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_rift_auth_provider_config, addr 0x52c8914, size 0xf0, virtual false, abstract: false, final false
inline void set_rift_auth_provider_config(::GlobalNamespace::RiftAuthProviderConfig*  value) ;

/// @brief Method set_title_id, addr 0x52c8174, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52c7b3c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipTitleEnvironment*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipTitleEnvironment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipTitleEnvironment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipTitleEnvironment(MothershipTitleEnvironment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipTitleEnvironment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipTitleEnvironment(MothershipTitleEnvironment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9373};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipTitleEnvironment, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipTitleEnvironment, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipTitleEnvironment) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
