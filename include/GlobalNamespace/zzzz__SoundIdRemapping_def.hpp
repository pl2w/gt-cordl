#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundIdRemapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SoundIdRemapping)
// Forward declare root types
namespace GlobalNamespace {
class SoundIdRemapping;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundIdRemapping*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundIdRemapping*, "", "SoundIdRemapping");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundIdRemapping
class CORDL_TYPE SoundIdRemapping : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SoundIn)) int32_t  SoundIn;

 __declspec(property(get=get_SoundOut)) int32_t  SoundOut;

/// @brief Field soundIn, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundIn, put=__cordl_internal_set_soundIn)) int32_t  soundIn;

/// @brief Field soundOut, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundOut, put=__cordl_internal_set_soundOut)) int32_t  soundOut;

static inline ::GlobalNamespace::SoundIdRemapping* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_soundIn() const;

constexpr int32_t& __cordl_internal_get_soundIn() ;

constexpr int32_t const& __cordl_internal_get_soundOut() const;

constexpr int32_t& __cordl_internal_get_soundOut() ;

constexpr void __cordl_internal_set_soundIn(int32_t  value) ;

constexpr void __cordl_internal_set_soundOut(int32_t  value) ;

/// @brief Method .ctor, addr 0x55ef2d8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SoundIn, addr 0x55ef2c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SoundIn() ;

/// @brief Method get_SoundOut, addr 0x55ef2d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SoundOut() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundIdRemapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundIdRemapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundIdRemapping(SoundIdRemapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundIdRemapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundIdRemapping(SoundIdRemapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{65};

/// [GorillaSoundLookup]
/// [SerializeField]
/// @brief Field soundIn, offset: 0x10, size: 0x4, def value: None
 int32_t  ___soundIn;

/// [GorillaSoundLookup]
/// [SerializeField]
/// @brief Field soundOut, offset: 0x14, size: 0x4, def value: None
 int32_t  ___soundOut;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundIdRemapping, ___soundIn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundIdRemapping, ___soundOut) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundIdRemapping) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
