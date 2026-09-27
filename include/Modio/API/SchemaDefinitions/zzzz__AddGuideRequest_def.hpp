#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddGuideRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddGuideRequest)
namespace Modio::API {
class IApiRequest;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct AddGuideRequest;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AddGuideRequest);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AddGuideRequest, "Modio.API.SchemaDefinitions", "AddGuideRequest");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AddGuideRequest
struct CORDL_TYPE AddGuideRequest {
public:
// Declarations
/// @brief Field _bodyParameters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bodyParameters, put=setStaticF__bodyParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _bodyParameters;

/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr operator  ::Modio::API::IApiRequest*() ;

/// @brief Method GetBodyParameters, addr 0x9fe3cec, size 0x2d4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* GetBodyParameters() ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe3c44, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  summary, ::StringW  description, ::StringW  logo, int64_t  date_live, int64_t  status, int64_t  community_options, ::ArrayW<::StringW>  tags, ::StringW  name_id) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* getStaticF__bodyParameters() ;

/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* i___Modio__API__IApiRequest() ;

static inline void setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddGuideRequest() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Logo", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr AddGuideRequest(::StringW  Name, ::StringW  Summary, ::StringW  Description, ::StringW  Logo, int64_t  DateLive, int64_t  Status, int64_t  CommunityOptions, ::ArrayW<::StringW>  Tags, ::StringW  NameId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Summary, offset: 0x8, size: 0x8, def value: None
 ::StringW  Summary;

/// @brief Field Description, offset: 0x10, size: 0x8, def value: None
 ::StringW  Description;

/// @brief Field Logo, offset: 0x18, size: 0x8, def value: None
 ::StringW  Logo;

/// @brief Field DateLive, offset: 0x20, size: 0x8, def value: None
 int64_t  DateLive;

/// @brief Field Status, offset: 0x28, size: 0x8, def value: None
 int64_t  Status;

/// @brief Field CommunityOptions, offset: 0x30, size: 0x8, def value: None
 int64_t  CommunityOptions;

/// @brief Field Tags, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  Tags;

/// @brief Field NameId, offset: 0x40, size: 0x8, def value: None
 ::StringW  NameId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, Summary) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, Description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, Logo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, DateLive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, Status) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, CommunityOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, Tags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AddGuideRequest, NameId) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AddGuideRequest) == 0x48, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
