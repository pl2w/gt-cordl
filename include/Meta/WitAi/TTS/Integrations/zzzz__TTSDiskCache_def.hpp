#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSDiskCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSDiskCache)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSDiskCacheHandler;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
class TTSDiskCache;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSDiskCache*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSDiskCache*, "Meta.WitAi.TTS.Integrations", "TTSDiskCache");
// [LogCategory((Meta.Voice.Logging.LogCategory)8)]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSDiskCache
class CORDL_TYPE TTSDiskCache : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DiskCacheDefaultSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  DiskCacheDefaultSettings;

 __declspec(property(get=get_DiskPath)) ::StringW  DiskPath;

/// @brief Field _defaultSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultSettings, put=__cordl_internal_set__defaultSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  _defaultSettings;

/// @brief Field _diskPath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__diskPath, put=__cordl_internal_set__diskPath)) ::StringW  _diskPath;

/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler"
constexpr operator  ::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*() noexcept;

/// @brief Method GetDiskCachePath, addr 0x9e54c3c, size 0x284, virtual true, abstract: false, final true
inline ::StringW GetDiskCachePath(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

static inline ::Meta::WitAi::TTS::Integrations::TTSDiskCache* New_ctor() ;

/// @brief Method ShouldCacheToDisk, addr 0x9e54ec0, size 0x40, virtual true, abstract: false, final true
inline bool ShouldCacheToDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get__defaultSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get__defaultSettings() ;

constexpr ::StringW const& __cordl_internal_get__diskPath() const;

constexpr ::StringW& __cordl_internal_get__diskPath() ;

constexpr void __cordl_internal_set__defaultSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set__diskPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e54f00, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DiskCacheDefaultSettings, addr 0x9e54c34, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* get_DiskCacheDefaultSettings() ;

/// @brief Method get_DiskPath, addr 0x9e54c2c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DiskPath() ;

/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler* i___Meta__WitAi__TTS__Interfaces__ITTSDiskCacheHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSDiskCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSDiskCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSDiskCache(TTSDiskCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSDiskCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSDiskCache(TTSDiskCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29110};

/// [Header("Disk Cache Settings")]
/// [SerializeField]
/// @brief Field _diskPath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____diskPath;

/// [SerializeField]
/// @brief Field _defaultSettings, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ____defaultSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSDiskCache, ____diskPath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSDiskCache, ____defaultSettings) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSDiskCache) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
