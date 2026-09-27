#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/TriangleAreaSorter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriangleAreaSorter)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace Technie::PhysicsCreator {
class Triangle;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class TriangleAreaSorter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::TriangleAreaSorter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::TriangleAreaSorter*, "Technie.PhysicsCreator", "TriangleAreaSorter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.TriangleAreaSorter
class CORDL_TYPE TriangleAreaSorter : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>*() noexcept;

/// @brief Method Compare, addr 0xadc5010, size 0x40, virtual true, abstract: false, final true
inline int32_t Compare(::Technie::PhysicsCreator::Triangle*  lhs, ::Technie::PhysicsCreator::Triangle*  rhs) ;

static inline ::Technie::PhysicsCreator::TriangleAreaSorter* New_ctor() ;

/// @brief Method .ctor, addr 0xadc5050, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>"
constexpr ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>* i___System__Collections__Generic__IComparer_1___Technie__PhysicsCreator__Triangle__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriangleAreaSorter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriangleAreaSorter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangleAreaSorter(TriangleAreaSorter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangleAreaSorter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangleAreaSorter(TriangleAreaSorter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::TriangleAreaSorter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
