#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ITTSRuntimeCacheHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITTSRuntimeCacheHandler)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Interfaces {
class TTSClipCallback;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class ITTSRuntimeCacheHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*, "Meta.WitAi.TTS.Interfaces", "ITTSRuntimeCacheHandler");
// Dependencies 
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler
class CORDL_TYPE ITTSRuntimeCacheHandler {
public:
// Declarations
/// @brief Method AddClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AddClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method GetClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* GetClip(::StringW  clipID) ;

/// @brief Method GetClips, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> GetClips() ;

/// @brief Method RemoveClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveClip(::StringW  clipID) ;

/// [CompilerGenerated]
/// @brief Method add_OnClipAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnClipAdded(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnClipRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnClipRemoved(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnClipAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnClipAdded(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnClipRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnClipRemoved(::Meta::WitAi::TTS::Interfaces::TTSClipCallback*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITTSRuntimeCacheHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITTSRuntimeCacheHandler(ITTSRuntimeCacheHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29106};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Interfaces
