#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/TriangleBucketSorter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriangleBucketSorter)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace Technie::PhysicsCreator {
class TriangleBucket;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class TriangleBucketSorter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::TriangleBucketSorter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::TriangleBucketSorter*, "Technie.PhysicsCreator", "TriangleBucketSorter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.TriangleBucketSorter
class CORDL_TYPE TriangleBucketSorter : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>*() noexcept;

/// @brief Method Compare, addr 0xadc5058, size 0x40, virtual true, abstract: false, final true
inline int32_t Compare(::Technie::PhysicsCreator::TriangleBucket*  lhs, ::Technie::PhysicsCreator::TriangleBucket*  rhs) ;

static inline ::Technie::PhysicsCreator::TriangleBucketSorter* New_ctor() ;

/// @brief Method .ctor, addr 0xadc5098, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>"
constexpr ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>* i___System__Collections__Generic__IComparer_1___Technie__PhysicsCreator__TriangleBucket__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriangleBucketSorter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriangleBucketSorter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangleBucketSorter(TriangleBucketSorter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangleBucketSorter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangleBucketSorter(TriangleBucketSorter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30486};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::TriangleBucketSorter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
