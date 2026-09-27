#pragma once
// IWYU pragma private; include "NexusSDK/SDKInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SDKInitializer)
// Forward declare root types
namespace NexusSDK {
class SDKInitializer;
}
// Write type traits
MARK_REF_T(::NexusSDK::SDKInitializer*);
DEFINE_IL2CPP_CLASS(::NexusSDK::SDKInitializer*, "NexusSDK", "SDKInitializer");
// Dependencies System.Object
namespace NexusSDK {
// Is value type: false
// CS Name: NexusSDK.SDKInitializer
class CORDL_TYPE SDKInitializer : public ::System::Object {
public:
// Declarations
/// @brief Field <ApiBaseUrl>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ApiBaseUrl_k__BackingField, put=setStaticF__ApiBaseUrl_k__BackingField)) ::StringW  _ApiBaseUrl_k__BackingField;

/// @brief Field <ApiKey>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ApiKey_k__BackingField, put=setStaticF__ApiKey_k__BackingField)) ::StringW  _ApiKey_k__BackingField;

/// @brief Method Init, addr 0xa3fe828, size 0x174, virtual false, abstract: false, final false
static inline void Init(::StringW  apiKey, ::StringW  environment) ;

static inline ::StringW getStaticF__ApiBaseUrl_k__BackingField() ;

static inline ::StringW getStaticF__ApiKey_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_ApiBaseUrl, addr 0xa3fe790, size 0x48, virtual false, abstract: false, final false
static inline ::StringW get_ApiBaseUrl() ;

/// [CompilerGenerated]
/// @brief Method get_ApiKey, addr 0xa3fe6f0, size 0x48, virtual false, abstract: false, final false
static inline ::StringW get_ApiKey() ;

static inline void setStaticF__ApiBaseUrl_k__BackingField(::StringW  value) ;

static inline void setStaticF__ApiKey_k__BackingField(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ApiBaseUrl, addr 0xa3fe7d8, size 0x50, virtual false, abstract: false, final false
static inline void set_ApiBaseUrl(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ApiKey, addr 0xa3fe738, size 0x58, virtual false, abstract: false, final false
static inline void set_ApiKey(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SDKInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SDKInitializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SDKInitializer(SDKInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SDKInitializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SDKInitializer(SDKInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::NexusSDK::SDKInitializer) == 0x10, "Size mismatch!");

} // namespace end def NexusSDK
