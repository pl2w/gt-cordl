#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipApi)
namespace GlobalNamespace {
class ComplexPrerequisiteNodes;
}
namespace GlobalNamespace {
class NodeReference;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__Value;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__string;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__variantT_MothershipApiShared__NodeReference_MothershipApiShared__ComplexPrerequisiteNodes_t;
}
namespace GlobalNamespace {
class StringVector;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipApi;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipApi*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipApi*, "", "MothershipApi");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipApi
class CORDL_TYPE MothershipApi : public ::System::Object {
public:
// Declarations
/// @brief Field RAPIDJSON_HAS_STDSTRING, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RAPIDJSON_HAS_STDSTRING, put=setStaticF_RAPIDJSON_HAS_STDSTRING)) int32_t  RAPIDJSON_HAS_STDSTRING;

/// @brief Method CalculateNextRetryTime, addr 0x5589ba8, size 0xd0, virtual false, abstract: false, final false
static inline float_t CalculateNextRetryTime(float_t  currentTime, int32_t  numRetries) ;

/// @brief Method GetCurrentTimeISO8601, addr 0x5589c78, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW GetCurrentTimeISO8601() ;

/// @brief Method IsHttpSuccessCode, addr 0x558990c, size 0xd4, virtual false, abstract: false, final false
static inline bool IsHttpSuccessCode(int32_t  status, bool  AllowRedirects) ;

/// @brief Method IsRetryableHttpStatusCode, addr 0x55899e0, size 0xc4, virtual false, abstract: false, final false
static inline bool IsRetryableHttpStatusCode(int32_t  status) ;

static inline ::GlobalNamespace::MothershipApi* New_ctor() ;

/// @brief Method ParseForErrorDetails, addr 0x55897c0, size 0x14c, virtual false, abstract: false, final false
static inline bool ParseForErrorDetails(int32_t  status, ::StringW  errorBody, ::GlobalNamespace::SWIGTYPE_p_std__string*  outDetails, ::GlobalNamespace::SWIGTYPE_p_std__string*  outMothershipCode, ::GlobalNamespace::SWIGTYPE_p_std__string*  outTraceId) ;

/// @brief Method ParseForErrorMessage, addr 0x55896fc, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW ParseForErrorMessage(::StringW  body) ;

/// @brief Method ParseTags, addr 0x5589aa4, size 0x104, virtual false, abstract: false, final false
static inline bool ParseTags(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value*  tagsElement, ::GlobalNamespace::StringVector*  tagsVector) ;

/// @brief Method TryGetComplexPrerequisiteNodeFromVariant, addr 0x558a3d0, size 0x104, virtual false, abstract: false, final false
static inline bool TryGetComplexPrerequisiteNodeFromVariant(::GlobalNamespace::SWIGTYPE_p_std__variantT_MothershipApiShared__NodeReference_MothershipApiShared__ComplexPrerequisiteNodes_t*  variant, ::GlobalNamespace::ComplexPrerequisiteNodes*  value) ;

/// @brief Method TryGetNodeReferenceFromVariant, addr 0x558a4d4, size 0x104, virtual false, abstract: false, final false
static inline bool TryGetNodeReferenceFromVariant(::GlobalNamespace::SWIGTYPE_p_std__variantT_MothershipApiShared__NodeReference_MothershipApiShared__ComplexPrerequisiteNodes_t*  variant, ::GlobalNamespace::NodeReference*  value) ;

/// @brief Method .ctor, addr 0x558a750, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_RAPIDJSON_HAS_STDSTRING() ;

/// @brief Method get_BASE_PATH_DLC, addr 0x558a694, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_DLC() ;

/// @brief Method get_BASE_PATH_INVENTORY, addr 0x558a024, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_INVENTORY() ;

/// @brief Method get_BASE_PATH_LINK, addr 0x558a5d8, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_LINK() ;

/// @brief Method get_BASE_PATH_MODERATION, addr 0x558a19c, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_MODERATION() ;

/// @brief Method get_BASE_PATH_PROGRESSION, addr 0x558a258, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_PROGRESSION() ;

/// @brief Method get_BASE_PATH_PROGRESSION_TREE, addr 0x558a314, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_PROGRESSION_TREE() ;

/// @brief Method get_BASE_PATH_PURCHASE, addr 0x5589f68, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_PURCHASE() ;

/// @brief Method get_BASE_PATH_SHAREDGROUP, addr 0x558a0e0, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_SHAREDGROUP() ;

/// @brief Method get_BASE_PATH_TITLEDATA, addr 0x5589eac, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_TITLEDATA() ;

/// @brief Method get_BASE_PATH_USERDATA, addr 0x5589df0, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_BASE_PATH_USERDATA() ;

/// @brief Method get_FORMAT_WRITE_EVENTS, addr 0x5589d34, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_FORMAT_WRITE_EVENTS() ;

/// @brief Method get_MOTHERSHIP_ACCEPT_LANGUAGE_HEADER, addr 0x55891d8, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ACCEPT_LANGUAGE_HEADER() ;

/// @brief Method get_MOTHERSHIP_AUTOMATION_KEY_HEADER, addr 0x5588e2c, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_AUTOMATION_KEY_HEADER() ;

/// @brief Method get_MOTHERSHIP_CLIENT_TOKEN_HEADER, addr 0x5588d70, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_CLIENT_TOKEN_HEADER() ;

/// @brief Method get_MOTHERSHIP_DEPLOYMENT_ID_HEADER, addr 0x5588cb4, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_DEPLOYMENT_ID_HEADER() ;

/// @brief Method get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE, addr 0x558940c, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE() ;

/// @brief Method get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE_LOW_SCRUTINY, addr 0x5589640, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE_LOW_SCRUTINY() ;

/// @brief Method get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY, addr 0x5589350, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY() ;

/// @brief Method get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY_LOW_SCRUTINY, addr 0x5589584, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY_LOW_SCRUTINY() ;

/// @brief Method get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE, addr 0x5589294, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE() ;

/// @brief Method get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE_LOW_SCRUTINY, addr 0x55894c8, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE_LOW_SCRUTINY() ;

/// @brief Method get_MOTHERSHIP_ENV_ID_HEADER, addr 0x5588bf8, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ENV_ID_HEADER() ;

/// @brief Method get_MOTHERSHIP_ORG_ID_HEADER, addr 0x5588a80, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_ORG_ID_HEADER() ;

/// @brief Method get_MOTHERSHIP_SDK_VERSION, addr 0x5588fa4, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_SDK_VERSION() ;

/// @brief Method get_MOTHERSHIP_SDK_VERSION_HEADER, addr 0x5589060, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_SDK_VERSION_HEADER() ;

/// @brief Method get_MOTHERSHIP_SERVER_API_KEY_HEADER, addr 0x5588ee8, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_SERVER_API_KEY_HEADER() ;

/// @brief Method get_MOTHERSHIP_SESSION_ID_HEADER, addr 0x558911c, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_SESSION_ID_HEADER() ;

/// @brief Method get_MOTHERSHIP_TITLE_ID_HEADER, addr 0x5588b3c, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_MOTHERSHIP_TITLE_ID_HEADER() ;

static inline void setStaticF_RAPIDJSON_HAS_STDSTRING(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipApi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipApi", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipApi(MothershipApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipApi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipApi(MothershipApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipApi) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
