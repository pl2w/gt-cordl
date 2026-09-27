#pragma once
// IWYU pragma private; include "GlobalNamespace/BitPackDebug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BitPackDebug)
// Forward declare root types
namespace GlobalNamespace {
class BitPackDebug;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BitPackDebug*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitPackDebug*, "", "BitPackDebug");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitPackDebug
class CORDL_TYPE BitPackDebug : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field debug16, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_debug16, put=__cordl_internal_set_debug16)) bool  debug16;

/// @brief Field debug32, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_debug32, put=__cordl_internal_set_debug32)) bool  debug32;

/// @brief Field debugPos, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugPos, put=__cordl_internal_set_debugPos)) bool  debugPos;

/// @brief Field max, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) ::UnityEngine::Vector3  max;

/// @brief Field min, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) ::UnityEngine::Vector3  min;

/// @brief Field packed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_packed, put=__cordl_internal_set_packed)) uint32_t  packed;

/// @brief Field packed16, offset 0x62, size 0x2 
 __declspec(property(get=__cordl_internal_get_packed16, put=__cordl_internal_set_packed16)) uint16_t  packed16;

/// @brief Field pos, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) ::UnityEngine::Vector3  pos;

/// @brief Field rad, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rad, put=__cordl_internal_set_rad)) float_t  rad;

/// @brief Field unpacked, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_unpacked, put=__cordl_internal_set_unpacked)) ::UnityEngine::Vector3  unpacked;

/// @brief Field unpacked16, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_unpacked16, put=__cordl_internal_set_unpacked16)) ::UnityEngine::Vector3  unpacked16;

static inline ::GlobalNamespace::BitPackDebug* New_ctor() ;

constexpr bool const& __cordl_internal_get_debug16() const;

constexpr bool& __cordl_internal_get_debug16() ;

constexpr bool const& __cordl_internal_get_debug32() const;

constexpr bool& __cordl_internal_get_debug32() ;

constexpr bool const& __cordl_internal_get_debugPos() const;

constexpr bool& __cordl_internal_get_debugPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_max() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_max() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_min() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_min() ;

constexpr uint32_t const& __cordl_internal_get_packed() const;

constexpr uint32_t& __cordl_internal_get_packed() ;

constexpr uint16_t const& __cordl_internal_get_packed16() const;

constexpr uint16_t& __cordl_internal_get_packed16() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos() ;

constexpr float_t const& __cordl_internal_get_rad() const;

constexpr float_t& __cordl_internal_get_rad() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_unpacked() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_unpacked() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_unpacked16() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_unpacked16() ;

constexpr void __cordl_internal_set_debug16(bool  value) ;

constexpr void __cordl_internal_set_debug32(bool  value) ;

constexpr void __cordl_internal_set_debugPos(bool  value) ;

constexpr void __cordl_internal_set_max(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_min(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_packed(uint32_t  value) ;

constexpr void __cordl_internal_set_packed16(uint16_t  value) ;

constexpr void __cordl_internal_set_pos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rad(float_t  value) ;

constexpr void __cordl_internal_set_unpacked(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_unpacked16(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5ae1f24, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitPackDebug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitPackDebug", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitPackDebug(BitPackDebug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitPackDebug", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitPackDebug(BitPackDebug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3472};

/// @brief Field debugPos, offset: 0x20, size: 0x1, def value: None
 bool  ___debugPos;

/// @brief Field pos, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pos;

/// @brief Field min, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___min;

/// @brief Field max, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___max;

/// @brief Field rad, offset: 0x48, size: 0x4, def value: None
 float_t  ___rad;

/// [Space]
/// @brief Field debug32, offset: 0x4c, size: 0x1, def value: None
 bool  ___debug32;

/// @brief Field packed, offset: 0x50, size: 0x4, def value: None
 uint32_t  ___packed;

/// @brief Field unpacked, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___unpacked;

/// [Space]
/// @brief Field debug16, offset: 0x60, size: 0x1, def value: None
 bool  ___debug16;

/// @brief Field packed16, offset: 0x62, size: 0x2, def value: None
 uint16_t  ___packed16;

/// @brief Field unpacked16, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___unpacked16;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___debugPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___pos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___min) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___max) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___rad) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___debug32) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___packed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___unpacked) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___debug16) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___packed16) == 0x62, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitPackDebug, ___unpacked16) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitPackDebug) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
