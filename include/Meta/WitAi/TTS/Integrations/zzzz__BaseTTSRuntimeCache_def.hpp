#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/BaseTTSRuntimeCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BaseTTSRuntimeCache)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSRuntimeCacheHandler;
}
namespace Meta::WitAi::TTS::Interfaces {
class TTSClipCallback;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
class BaseTTSRuntimeCache;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache*, "Meta.WitAi.TTS.Integrations", "BaseTTSRuntimeCache");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.BaseTTSRuntimeCache
class CORDL_TYPE BaseTTSRuntimeCache : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnClipAdded, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipAdded, put=__cordl_internal_set_OnClipAdded)) ::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  OnClipAdded;

/// @brief Field OnClipRemoved, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipRemoved, put=__cordl_internal_set_OnClipRemoved)) ::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  OnClipRemoved;

/// @brief Field _clips, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__clips, put=__cordl_internal_set__clips)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Data::TTSClipData*>*  _clips;

/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler"
constexpr operator  ::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*() noexcept;

/// @brief Method AddClip, addr 0x9e548e8, size 0xec, virtual true, abstract: false, final false
inline bool AddClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method BreakdownClip, addr 0x9e54ac0, size 0xe4, virtual true, abstract: false, final false
inline void BreakdownClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method GetClip, addr 0x9e54878, size 0x70, virtual true, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* GetClip(::StringW  clipId) ;

/// @brief Method GetClips, addr 0x9e547bc, size 0x6c, virtual true, abstract: false, final false
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> GetClips() ;

static inline ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9e54828, size 0x50, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoveClip, addr 0x9e549f0, size 0xd0, virtual true, abstract: false, final false
inline void RemoveClip(::StringW  clipID) ;

/// @brief Method SetupClip, addr 0x9e549d4, size 0x1c, virtual true, abstract: false, final false
inline void SetupClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback* const& __cordl_internal_get_OnClipAdded() const;

constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback*& __cordl_internal_get_OnClipAdded() ;

constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback* const& __cordl_internal_get_OnClipRemoved() const;

constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback*& __cordl_internal_get_OnClipRemoved() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get__clips() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get__clips() ;

constexpr void __cordl_internal_set_OnClipAdded(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

constexpr void __cordl_internal_set_OnClipRemoved(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

constexpr void __cordl_internal_set__clips(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

/// @brief Method .ctor, addr 0x9e54ba4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnClipAdded, addr 0x9e5454c, size 0x9c, virtual true, abstract: false, final true
inline void add_OnClipAdded(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnClipRemoved, addr 0x9e54684, size 0x9c, virtual true, abstract: false, final true
inline void add_OnClipRemoved(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler* i___Meta__WitAi__TTS__Interfaces__ITTSRuntimeCacheHandler() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnClipAdded, addr 0x9e545e8, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnClipAdded(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnClipRemoved, addr 0x9e54720, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnClipRemoved(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTTSRuntimeCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTTSRuntimeCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTTSRuntimeCache(BaseTTSRuntimeCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTTSRuntimeCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTTSRuntimeCache(BaseTTSRuntimeCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29109};

/// [CompilerGenerated]
/// @brief Field OnClipAdded, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  ___OnClipAdded;

/// [CompilerGenerated]
/// @brief Field OnClipRemoved, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  ___OnClipRemoved;

/// @brief Field _clips, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Data::TTSClipData*>*  ____clips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache, ___OnClipAdded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache, ___OnClipRemoved) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache, ____clips) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
