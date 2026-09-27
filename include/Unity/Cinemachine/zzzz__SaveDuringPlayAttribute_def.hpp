#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SaveDuringPlayAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SaveDuringPlayAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class SaveDuringPlayAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::SaveDuringPlayAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SaveDuringPlayAttribute*, "Unity.Cinemachine", "SaveDuringPlayAttribute");
// Dependencies System.Attribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.SaveDuringPlayAttribute
class CORDL_TYPE SaveDuringPlayAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Unity::Cinemachine::SaveDuringPlayAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xaee7328, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveDuringPlayAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveDuringPlayAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveDuringPlayAttribute(SaveDuringPlayAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveDuringPlayAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveDuringPlayAttribute(SaveDuringPlayAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::SaveDuringPlayAttribute) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
