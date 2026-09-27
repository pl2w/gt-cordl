#pragma once
// IWYU pragma private; include "PlayFab/PlayFabLocalizationAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabLocalizationAPI)
namespace PlayFab::LocalizationModels {
class GetLanguageListRequest;
}
namespace PlayFab::LocalizationModels {
class GetLanguageListResponse;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab {
class PlayFabLocalizationAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabLocalizationAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabLocalizationAPI*, "PlayFab", "PlayFabLocalizationAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabLocalizationAPI
class CORDL_TYPE PlayFabLocalizationAPI : public ::System::Object {
public:
// Declarations
/// @brief Method ForgetAllCredentials, addr 0xa7ce268, size 0x60, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method GetLanguageList, addr 0xa7ce2c8, size 0x194, virtual false, abstract: false, final false
static inline void GetLanguageList(::PlayFab::LocalizationModels::GetLanguageListRequest*  request, ::System::Action_1<::PlayFab::LocalizationModels::GetLanguageListResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7ce1f4, size 0x74, virtual false, abstract: false, final false
static inline bool IsEntityLoggedIn() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabLocalizationAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabLocalizationAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabLocalizationAPI(PlayFabLocalizationAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabLocalizationAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabLocalizationAPI(PlayFabLocalizationAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19503};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabLocalizationAPI) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
