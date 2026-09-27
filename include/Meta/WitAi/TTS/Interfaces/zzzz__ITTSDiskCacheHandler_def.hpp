#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ITTSDiskCacheHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITTSDiskCacheHandler)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Interfaces {
class ITTSDiskCacheHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*, "Meta.WitAi.TTS.Interfaces", "ITTSDiskCacheHandler");
// Dependencies 
namespace Meta::WitAi::TTS::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler
class CORDL_TYPE ITTSDiskCacheHandler {
public:
// Declarations
 __declspec(property(get=get_DiskCacheDefaultSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  DiskCacheDefaultSettings;

/// @brief Method GetDiskCachePath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetDiskCachePath(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method ShouldCacheToDisk, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ShouldCacheToDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method get_DiskCacheDefaultSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* get_DiskCacheDefaultSettings() ;

// Ctor Parameters [CppParam { name: "", ty: "ITTSDiskCacheHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITTSDiskCacheHandler(ITTSDiskCacheHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Interfaces
