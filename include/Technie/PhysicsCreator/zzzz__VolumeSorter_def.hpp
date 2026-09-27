#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/VolumeSorter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeSorter)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace Technie::PhysicsCreator {
class RotatedBox;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class VolumeSorter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::VolumeSorter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::VolumeSorter*, "Technie.PhysicsCreator", "VolumeSorter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.VolumeSorter
class CORDL_TYPE VolumeSorter : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>*() noexcept;

/// @brief Method Compare, addr 0xadc64d0, size 0xc8, virtual true, abstract: false, final true
inline int32_t Compare(::Technie::PhysicsCreator::RotatedBox*  lhs, ::Technie::PhysicsCreator::RotatedBox*  rhs) ;

static inline ::Technie::PhysicsCreator::VolumeSorter* New_ctor() ;

/// @brief Method .ctor, addr 0xadc6598, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>"
constexpr ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>* i___System__Collections__Generic__IComparer_1___Technie__PhysicsCreator__RotatedBox__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolumeSorter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolumeSorter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VolumeSorter(VolumeSorter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolumeSorter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolumeSorter(VolumeSorter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::VolumeSorter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
