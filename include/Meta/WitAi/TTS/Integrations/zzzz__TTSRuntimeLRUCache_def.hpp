#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSRuntimeLRUCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Integrations/zzzz__BaseTTSRuntimeCache_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSRuntimeLRUCache)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
class TTSRuntimeLRUCache;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache*, "Meta.WitAi.TTS.Integrations", "TTSRuntimeLRUCache");
// Dependencies Meta.WitAi.TTS.Integrations.BaseTTSRuntimeCache
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSRuntimeLRUCache
class CORDL_TYPE TTSRuntimeLRUCache : public ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache {
public:
// Declarations
/// @brief Field ClipCapacity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClipCapacity, put=__cordl_internal_set_ClipCapacity)) int32_t  ClipCapacity;

/// @brief Field ClipLimit, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClipLimit, put=__cordl_internal_set_ClipLimit)) bool  ClipLimit;

/// @brief Field RamCapacity, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_RamCapacity, put=__cordl_internal_set_RamCapacity)) int32_t  RamCapacity;

/// @brief Field RamLimit, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_RamLimit, put=__cordl_internal_set_RamLimit)) bool  RamLimit;

/// @brief Field _clipOrder, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipOrder, put=__cordl_internal_set__clipOrder)) ::System::Collections::Generic::List_1<::StringW>*  _clipOrder;

/// @brief Method AddClip, addr 0x9e55370, size 0x118, virtual true, abstract: false, final false
inline bool AddClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method BreakdownClip, addr 0x9e5550c, size 0x98, virtual true, abstract: false, final false
inline void BreakdownClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method GetCacheDiskSize, addr 0x9e555a4, size 0x484, virtual false, abstract: false, final false
inline int32_t GetCacheDiskSize() ;

/// @brief Method GetClip, addr 0x9e55278, size 0x28, virtual true, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* GetClip(::StringW  clipId) ;

/// @brief Method GetClipBytes, addr 0x9e55a28, size 0x10, virtual false, abstract: false, final false
static inline int64_t GetClipBytes(int32_t  channels, int32_t  samples) ;

/// @brief Method GetClipBytes, addr 0x9e55a38, size 0x9c, virtual false, abstract: false, final false
static inline int64_t GetClipBytes(::UnityEngine::AudioClip*  clip) ;

/// @brief Method GetClips, addr 0x9e54f98, size 0x158, virtual true, abstract: false, final false
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> GetClips() ;

/// @brief Method IsCacheFull, addr 0x9e55488, size 0x84, virtual false, abstract: false, final false
inline bool IsCacheFull() ;

static inline ::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9e550f0, size 0x78, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RefreshClipLRU, addr 0x9e55168, size 0x110, virtual false, abstract: false, final false
inline bool RefreshClipLRU(::StringW  clipId) ;

/// @brief Method SetupClip, addr 0x9e552a0, size 0xd0, virtual true, abstract: false, final false
inline void SetupClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

constexpr int32_t const& __cordl_internal_get_ClipCapacity() const;

constexpr int32_t& __cordl_internal_get_ClipCapacity() ;

constexpr bool const& __cordl_internal_get_ClipLimit() const;

constexpr bool& __cordl_internal_get_ClipLimit() ;

constexpr int32_t const& __cordl_internal_get_RamCapacity() const;

constexpr int32_t& __cordl_internal_get_RamCapacity() ;

constexpr bool const& __cordl_internal_get_RamLimit() const;

constexpr bool& __cordl_internal_get_RamLimit() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__clipOrder() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__clipOrder() ;

constexpr void __cordl_internal_set_ClipCapacity(int32_t  value) ;

constexpr void __cordl_internal_set_ClipLimit(bool  value) ;

constexpr void __cordl_internal_set_RamCapacity(int32_t  value) ;

constexpr void __cordl_internal_set_RamLimit(bool  value) ;

constexpr void __cordl_internal_set__clipOrder(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9e55ad4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSRuntimeLRUCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSRuntimeLRUCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSRuntimeLRUCache(TTSRuntimeLRUCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSRuntimeLRUCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSRuntimeLRUCache(TTSRuntimeLRUCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29113};

/// [Header("Runtime Cache Settings")]
/// [Tooltip("Whether or not to unload clip data after the clip capacity is hit")]
/// [FormerlySerializedAs("_clipLimit")]
/// @brief Field ClipLimit, offset: 0x38, size: 0x1, def value: None
 bool  ___ClipLimit;

/// [Tooltip("The maximum clips allowed in the runtime cache")]
/// [FormerlySerializedAs("_clipCapacity")]
/// [Min(1)]
/// @brief Field ClipCapacity, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___ClipCapacity;

/// [Tooltip("Whether or not to unload clip data after the ram capacity is hit")]
/// [FormerlySerializedAs("_ramLimit")]
/// @brief Field RamLimit, offset: 0x40, size: 0x1, def value: None
 bool  ___RamLimit;

/// [Tooltip("The maximum amount of RAM allowed in the runtime cache in KBs.  For example, 24k samples per second * 2bits per sample * 10 minutes (600 seconds) = 3600KBs")]
/// [FormerlySerializedAs("_ramCapacity")]
/// [Min(1)]
/// @brief Field RamCapacity, offset: 0x44, size: 0x4, def value: None
 int32_t  ___RamCapacity;

/// @brief Field _clipOrder, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____clipOrder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache, ___ClipLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache, ___ClipCapacity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache, ___RamLimit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache, ___RamCapacity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache, ____clipOrder) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSRuntimeLRUCache) == 0x50, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
