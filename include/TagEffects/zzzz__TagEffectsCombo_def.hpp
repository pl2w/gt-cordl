#pragma once
// IWYU pragma private; include "TagEffects/TagEffectsCombo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TagEffectsCombo)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace TagEffects {
class TagEffectPack;
}
// Forward declare root types
namespace TagEffects {
class TagEffectsCombo;
}
// Write type traits
MARK_REF_T(::TagEffects::TagEffectsCombo*);
DEFINE_IL2CPP_CLASS(::TagEffects::TagEffectsCombo*, "TagEffects", "TagEffectsCombo");
// Dependencies System.Object
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.TagEffectsCombo
class CORDL_TYPE TagEffectsCombo : public ::System::Object {
public:
// Declarations
/// @brief Field inputA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputA, put=__cordl_internal_set_inputA)) ::UnityW<::TagEffects::TagEffectPack>  inputA;

/// @brief Field inputB, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputB, put=__cordl_internal_set_inputB)) ::UnityW<::TagEffects::TagEffectPack>  inputB;

/// @brief Convert operator to "::System::IEquatable_1<::TagEffects::TagEffectsCombo*>"
constexpr operator  ::System::IEquatable_1<::TagEffects::TagEffectsCombo*>*() noexcept;

/// @brief Method Equals, addr 0x5cd92b0, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x5cd933c, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::TagEffects::TagEffectsCombo* New_ctor() ;

/// @brief Method System.IEquatable<TagEffects.TagEffectsCombo>.Equals, addr 0x5cd9198, size 0x118, virtual true, abstract: false, final true
inline bool System_IEquatable_TagEffects_TagEffectsCombo__Equals(::TagEffects::TagEffectsCombo*  other) ;

constexpr ::UnityW<::TagEffects::TagEffectPack> const& __cordl_internal_get_inputA() const;

constexpr ::UnityW<::TagEffects::TagEffectPack>& __cordl_internal_get_inputA() ;

constexpr ::UnityW<::TagEffects::TagEffectPack> const& __cordl_internal_get_inputB() const;

constexpr ::UnityW<::TagEffects::TagEffectPack>& __cordl_internal_get_inputB() ;

constexpr void __cordl_internal_set_inputA(::UnityW<::TagEffects::TagEffectPack>  value) ;

constexpr void __cordl_internal_set_inputB(::UnityW<::TagEffects::TagEffectPack>  value) ;

/// @brief Method .ctor, addr 0x5cd88cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IEquatable_1<::TagEffects::TagEffectsCombo*>"
constexpr ::System::IEquatable_1<::TagEffects::TagEffectsCombo*>* i___System__IEquatable_1___TagEffects__TagEffectsCombo__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagEffectsCombo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsCombo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagEffectsCombo(TagEffectsCombo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsCombo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagEffectsCombo(TagEffectsCombo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4490};

/// @brief Field inputA, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TagEffects::TagEffectPack>  ___inputA;

/// @brief Field inputB, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TagEffects::TagEffectPack>  ___inputB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::TagEffectsCombo, ___inputA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsCombo, ___inputB) == 0x18, "Offset mismatch!");

static_assert(sizeof(::TagEffects::TagEffectsCombo) == 0x20, "Size mismatch!");

} // namespace end def TagEffects
