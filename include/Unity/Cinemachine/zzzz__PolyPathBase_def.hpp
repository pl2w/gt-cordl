#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyPathBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PolyPathBase)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
class PolyPathEnum;
}
// Forward declare root types
namespace Unity::Cinemachine {
class PolyPathBase;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::PolyPathBase*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PolyPathBase*, "Unity.Cinemachine", "PolyPathBase");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.PolyPathBase
class CORDL_TYPE PolyPathBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsHole)) bool  IsHole;

/// @brief Field _childs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__childs, put=__cordl_internal_set__childs)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  _childs;

/// @brief Field _parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::Unity::Cinemachine::PolyPathBase*  _parent;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method AddChild, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Cinemachine::PolyPathBase* AddChild(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  p) ;

/// @brief Method Clear, addr 0xaefa3ec, size 0x70, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetEnumerator, addr 0xaefb134, size 0x74, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PolyPathEnum* GetEnumerator() ;

/// @brief Method GetIsHole, addr 0xaefb200, size 0x1c, virtual false, abstract: false, final false
inline bool GetIsHole() ;

/// @brief [NullableContext(2)]
static inline ::Unity::Cinemachine::PolyPathBase* New_ctor(::Unity::Cinemachine::PolyPathBase*  parent) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaefb1e0, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>* const& __cordl_internal_get__childs() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*& __cordl_internal_get__childs() ;

constexpr ::Unity::Cinemachine::PolyPathBase* const& __cordl_internal_get__parent() const;

constexpr ::Unity::Cinemachine::PolyPathBase*& __cordl_internal_get__parent() ;

constexpr void __cordl_internal_set__childs(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  value) ;

constexpr void __cordl_internal_set__parent(::Unity::Cinemachine::PolyPathBase*  value) ;

/// [NullableContext(2)]
/// @brief Method .ctor, addr 0xaefb21c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::PolyPathBase*  parent) ;

/// @brief Method get_Count, addr 0xaefb2b8, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsHole, addr 0xaefb1e4, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsHole() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyPathBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyPathBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyPathBase(PolyPathBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyPathBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyPathBase(PolyPathBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22518};

/// [Nullable(2)]
/// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
 ::Unity::Cinemachine::PolyPathBase*  ____parent;

/// @brief Field _childs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  ____childs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PolyPathBase, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PolyPathBase, ____childs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PolyPathBase) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
