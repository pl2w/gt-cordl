#pragma once
// IWYU pragma private; include "UnityEngine/Localization/AssetAddress.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetAddress)
// Forward declare root types
namespace UnityEngine::Localization {
class AssetAddress;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::AssetAddress*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::AssetAddress*, "UnityEngine.Localization", "AssetAddress");
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.AssetAddress
class CORDL_TYPE AssetAddress : public ::System::Object {
public:
// Declarations
/// @brief Method FormatAddress, addr 0xb015810, size 0x74, virtual false, abstract: false, final false
static inline ::StringW FormatAddress(::StringW  guid, ::StringW  subAssetName) ;

/// @brief Method GetGuid, addr 0xb015700, size 0x84, virtual false, abstract: false, final false
static inline ::StringW GetGuid(::StringW  address) ;

/// @brief Method GetSubAssetName, addr 0xb015784, size 0x8c, virtual false, abstract: false, final false
static inline ::StringW GetSubAssetName(::StringW  address) ;

/// @brief Method IsSubAsset, addr 0xb0156a0, size 0x60, virtual false, abstract: false, final false
static inline bool IsSubAsset(::StringW  address) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetAddress() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetAddress", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetAddress(AssetAddress && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetAddress", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetAddress(AssetAddress const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25064};

/// @brief Field k_SubAssetEntryEndBracket offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SubAssetEntryEndBracket{u"]"};

/// @brief Field k_SubAssetEntryStartBracket offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SubAssetEntryStartBracket{u"["};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::AssetAddress) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
