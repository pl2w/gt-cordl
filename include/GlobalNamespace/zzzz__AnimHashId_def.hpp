#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimHashId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimHashId)
// Forward declare root types
namespace GlobalNamespace {
struct AnimHashId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimHashId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimHashId, "", "AnimHashId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimHashId
struct CORDL_TYPE AnimHashId {
public:
// Declarations
 __declspec(property(get=get_hash)) int32_t  hash;

 __declspec(property(get=get_text)) ::StringW  text;

/// @brief Method GetHashCode, addr 0x5ae0e68, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5ae0e60, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5ae0e2c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::StringW  text) ;

/// @brief Method get_hash, addr 0x5ae0e24, size 0x8, virtual false, abstract: false, final false
inline int32_t get_hash() ;

/// @brief Method get_text, addr 0x5ae0e1c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method op_Implicit, addr 0x5ae0e78, size 0x40, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AnimHashId op_Implicit___GlobalNamespace__AnimHashId(::StringW  s) ;

/// @brief Method op_Implicit, addr 0x5ae0e70, size 0x8, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::AnimHashId  h) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimHashId() ;

// Ctor Parameters [CppParam { name: "_text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_hash", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimHashId(::StringW  _text, int32_t  _hash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3455};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field _text, offset: 0x0, size: 0x8, def value: None
 ::StringW  _text;

/// @brief Field _hash, offset: 0x8, size: 0x4, def value: None
 int32_t  _hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimHashId, _text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimHashId, _hash) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimHashId) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
