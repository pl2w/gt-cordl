#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSRuntimePlaybackCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Integrations/zzzz__BaseTTSRuntimeCache_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSRuntimePlaybackCache)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
class TTSRuntimePlaybackCache;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache*, "Meta.WitAi.TTS.Integrations", "TTSRuntimePlaybackCache");
// Dependencies Meta.WitAi.TTS.Integrations.BaseTTSRuntimeCache
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSRuntimePlaybackCache
class CORDL_TYPE TTSRuntimePlaybackCache : public ::Meta::WitAi::TTS::Integrations::BaseTTSRuntimeCache {
public:
// Declarations
/// @brief Field _requests, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__requests, put=__cordl_internal_set__requests)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,int32_t>*  _requests;

/// @brief Method BreakdownClip, addr 0x9e55ec8, size 0x1c0, virtual true, abstract: false, final false
inline void BreakdownClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

static inline ::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache* New_ctor() ;

/// @brief Method OnRequestBegin, addr 0x9e55d4c, size 0xac, virtual false, abstract: false, final false
inline void OnRequestBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnRequestComplete, addr 0x9e55df8, size 0xd0, virtual false, abstract: false, final false
inline void OnRequestComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method SetupClip, addr 0x9e55b70, size 0x1dc, virtual true, abstract: false, final false
inline void SetupClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,int32_t>* const& __cordl_internal_get__requests() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,int32_t>*& __cordl_internal_get__requests() ;

constexpr void __cordl_internal_set__requests(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x9e56088, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSRuntimePlaybackCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSRuntimePlaybackCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSRuntimePlaybackCache(TTSRuntimePlaybackCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSRuntimePlaybackCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSRuntimePlaybackCache(TTSRuntimePlaybackCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29114};

/// @brief Field _requests, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,int32_t>*  ____requests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache, ____requests) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSRuntimePlaybackCache) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
