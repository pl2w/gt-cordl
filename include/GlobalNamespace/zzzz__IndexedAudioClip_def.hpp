#pragma once
// IWYU pragma private; include "GlobalNamespace/IndexedAudioClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndexedAudioClip)
// Forward declare root types
namespace GlobalNamespace {
class IndexedAudioClip;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IndexedAudioClip*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IndexedAudioClip*, "", "IndexedAudioClip");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: IndexedAudioClip
class CORDL_TYPE IndexedAudioClip : public ::System::Object {
public:
// Declarations
/// @brief Field intVal, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_intVal, put=__cordl_internal_set_intVal)) int32_t  intVal;

static inline ::GlobalNamespace::IndexedAudioClip* New_ctor(int32_t  a) ;

constexpr int32_t const& __cordl_internal_get_intVal() const;

constexpr int32_t& __cordl_internal_get_intVal() ;

constexpr void __cordl_internal_set_intVal(int32_t  value) ;

/// @brief Method .ctor, addr 0x56c1e2c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  a) ;

/// @brief Method op_Implicit, addr 0x56c1dc8, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::IndexedAudioClip* op_Implicit___GlobalNamespace__IndexedAudioClip_(int32_t  a) ;

/// @brief Method op_Implicit, addr 0x56c1db4, size 0x14, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::IndexedAudioClip*  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndexedAudioClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndexedAudioClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndexedAudioClip(IndexedAudioClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndexedAudioClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndexedAudioClip(IndexedAudioClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1002};

/// [SerializeField]
/// @brief Field intVal, offset: 0x10, size: 0x4, def value: None
 int32_t  ___intVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IndexedAudioClip, ___intVal) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IndexedAudioClip) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
