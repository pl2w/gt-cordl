#pragma once
// IWYU pragma private; include "GlobalNamespace/FoundAllocatorsMapped.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FoundAllocatorsMapped)
namespace GlobalNamespace {
class ViewsAndAllocator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FoundAllocatorsMapped;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FoundAllocatorsMapped*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FoundAllocatorsMapped*, "", "FoundAllocatorsMapped");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FoundAllocatorsMapped
class CORDL_TYPE FoundAllocatorsMapped : public ::System::Object {
public:
// Declarations
/// @brief Field allocators, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_allocators, put=__cordl_internal_set_allocators)) ::System::Collections::Generic::List_1<::GlobalNamespace::ViewsAndAllocator*>*  allocators;

/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field subGroups, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_subGroups, put=__cordl_internal_set_subGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::FoundAllocatorsMapped*>*  subGroups;

static inline ::GlobalNamespace::FoundAllocatorsMapped* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ViewsAndAllocator*>* const& __cordl_internal_get_allocators() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ViewsAndAllocator*>*& __cordl_internal_get_allocators() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FoundAllocatorsMapped*>* const& __cordl_internal_get_subGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FoundAllocatorsMapped*>*& __cordl_internal_get_subGroups() ;

constexpr void __cordl_internal_set_allocators(::System::Collections::Generic::List_1<::GlobalNamespace::ViewsAndAllocator*>*  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_subGroups(::System::Collections::Generic::List_1<::GlobalNamespace::FoundAllocatorsMapped*>*  value) ;

/// @brief Method .ctor, addr 0x5643648, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoundAllocatorsMapped() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoundAllocatorsMapped", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FoundAllocatorsMapped(FoundAllocatorsMapped && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoundAllocatorsMapped", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoundAllocatorsMapped(FoundAllocatorsMapped const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{658};

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field allocators, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ViewsAndAllocator*>*  ___allocators;

/// @brief Field subGroups, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FoundAllocatorsMapped*>*  ___subGroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FoundAllocatorsMapped, ___path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FoundAllocatorsMapped, ___allocators) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FoundAllocatorsMapped, ___subGroups) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FoundAllocatorsMapped) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
