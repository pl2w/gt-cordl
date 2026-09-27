#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSimpleNameID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTSimpleNameID)
// Forward declare root types
namespace GlobalNamespace {
struct GTSimpleNameID;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTSimpleNameID);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSimpleNameID, "", "GTSimpleNameID");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTSimpleNameID
struct CORDL_TYPE GTSimpleNameID {
public:
// Declarations
/// @brief Method FromString, addr 0x5697330, size 0x220, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTSimpleNameID FromString(::StringW  input) ;

/// @brief Method ToString, addr 0x5697550, size 0x120, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method _Read6Bits, addr 0x5697670, size 0x54, virtual false, abstract: false, final false
static inline uint64_t _Read6Bits(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GTSimpleNameID>  cv, int32_t  bitOffset) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTSimpleNameID() ;

// Ctor Parameters [CppParam { name: "U0", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "U1", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "U2", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "U3", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr GTSimpleNameID(uint64_t  U0, uint64_t  U1, uint64_t  U2, uint64_t  U3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{902};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _k_bitmask6Bits offset 0xffffffff size 0x8
static constexpr uint64_t  _k_bitmask6Bits{static_cast<uint64_t>(0x3fu)};

/// @brief Field _k_indexOf_A offset 0xffffffff size 0x2
static constexpr uint16_t  _k_indexOf_A{static_cast<uint16_t>(0xau)};

/// @brief Field _k_indexOf_a offset 0xffffffff size 0x2
static constexpr uint16_t  _k_indexOf_a{static_cast<uint16_t>(0x24u)};

/// @brief Field _k_indexOf_hyphen offset 0xffffffff size 0x2
static constexpr uint16_t  _k_indexOf_hyphen{static_cast<uint16_t>(0x3fu)};

/// @brief Field _k_indexOf_underscore offset 0xffffffff size 0x2
static constexpr uint16_t  _k_indexOf_underscore{static_cast<uint16_t>(0x3eu)};

/// @brief Field _k_maxLength offset 0xffffffff size 0x4
static constexpr int32_t  _k_maxLength{static_cast<int32_t>(0x29)};

/// @brief Field _k_possibleChars offset 0xffffffff size 0x8
static constexpr ::ConstString  _k_possibleChars{u"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_-"};

/// @brief Field U0, offset: 0x0, size: 0x8, def value: None
 uint64_t  U0;

/// @brief Field U1, offset: 0x8, size: 0x8, def value: None
 uint64_t  U1;

/// @brief Field U2, offset: 0x10, size: 0x8, def value: None
 uint64_t  U2;

/// @brief Field U3, offset: 0x18, size: 0x8, def value: None
 uint64_t  U3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTSimpleNameID, U0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSimpleNameID, U1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSimpleNameID, U2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSimpleNameID, U3) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTSimpleNameID) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
