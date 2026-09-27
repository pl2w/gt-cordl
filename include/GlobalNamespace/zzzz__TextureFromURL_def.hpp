#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureFromURL.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TextureFromURL_Source_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureFromURL)
namespace GlobalNamespace {
struct TextureFromURL_Source;
}
namespace GlobalNamespace {
struct TextureFromURL__GetRemoteTexture_d__12;
}
namespace GlobalNamespace {
struct TextureFromURL__LoadFromTitleData_d__7;
}
namespace GlobalNamespace {
struct TextureFromURL__applyRemoteTexture_d__11;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureFromURL;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextureFromURL*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureFromURL*, "", "TextureFromURL");
// Dependencies TextureFromURL::Source, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureFromURL
class CORDL_TYPE TextureFromURL : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Source = ::GlobalNamespace::TextureFromURL_Source;

using _GetRemoteTexture_d__12 = ::GlobalNamespace::TextureFromURL__GetRemoteTexture_d__12;

using _LoadFromTitleData_d__7 = ::GlobalNamespace::TextureFromURL__LoadFromTitleData_d__7;

using _applyRemoteTexture_d__11 = ::GlobalNamespace::TextureFromURL__applyRemoteTexture_d__11;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::StringW  data;

/// @brief Field maxTitleDataAttempts, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTitleDataAttempts, put=__cordl_internal_set_maxTitleDataAttempts)) int32_t  maxTitleDataAttempts;

/// @brief Field source, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::GlobalNamespace::TextureFromURL_Source  source;

/// @brief Field texture, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

/// [AsyncStateMachine(typeof(TextureFromURL::<GetRemoteTexture>d__12))]
/// @brief Method GetRemoteTexture, addr 0x5b30390, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* GetRemoteTexture(::StringW  url) ;

/// [AsyncStateMachine(typeof(TextureFromURL::<LoadFromTitleData>d__7))]
/// @brief Method LoadFromTitleData, addr 0x5b30074, size 0xa4, virtual false, abstract: false, final false
inline void LoadFromTitleData() ;

static inline ::GlobalNamespace::TextureFromURL* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b301d8, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b30048, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayFabError, addr 0x5b30278, size 0x4, virtual false, abstract: false, final false
inline void OnPlayFabError(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnTitleDataRequestComplete, addr 0x5b3027c, size 0x114, virtual false, abstract: false, final false
inline void OnTitleDataRequestComplete(::StringW  imageUrl) ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::StringW const& __cordl_internal_get_data() const;

constexpr ::StringW& __cordl_internal_get_data() ;

constexpr int32_t const& __cordl_internal_get_maxTitleDataAttempts() const;

constexpr int32_t& __cordl_internal_get_maxTitleDataAttempts() ;

constexpr ::GlobalNamespace::TextureFromURL_Source const& __cordl_internal_get_source() const;

constexpr ::GlobalNamespace::TextureFromURL_Source& __cordl_internal_get_source() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_data(::StringW  value) ;

constexpr void __cordl_internal_set_maxTitleDataAttempts(int32_t  value) ;

constexpr void __cordl_internal_set_source(::GlobalNamespace::TextureFromURL_Source  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x5b30498, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [AsyncStateMachine(typeof(TextureFromURL::<applyRemoteTexture>d__11))]
/// @brief Method applyRemoteTexture, addr 0x5b30118, size 0xc0, virtual false, abstract: false, final false
inline void applyRemoteTexture(::StringW  imageUrl) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureFromURL() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureFromURL", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureFromURL(TextureFromURL && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureFromURL", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureFromURL(TextureFromURL const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3659};

/// [SerializeField]
/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field source, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::TextureFromURL_Source  ___source;

/// [Tooltip("If Source is set to \'TitleData\' Data should be the id of the title data entry that defines an image URL. If Source is set to \'URL\' Data should be a URL that points to an image.")]
/// [SerializeField]
/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___data;

/// @brief Field texture, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

/// @brief Field maxTitleDataAttempts, offset: 0x40, size: 0x4, def value: None
 int32_t  ___maxTitleDataAttempts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureFromURL, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureFromURL, ___source) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureFromURL, ___data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureFromURL, ___texture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureFromURL, ___maxTitleDataAttempts) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureFromURL) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
