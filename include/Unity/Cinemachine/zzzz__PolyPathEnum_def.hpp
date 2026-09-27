#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyPathEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PolyPathEnum)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace Unity::Cinemachine {
class PolyPathBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class PolyPathEnum;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::PolyPathEnum*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PolyPathEnum*, "Unity.Cinemachine", "PolyPathEnum");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.PolyPathEnum
class CORDL_TYPE PolyPathEnum : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Unity::Cinemachine::PolyPathBase*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field _ppbList, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ppbList, put=__cordl_internal_set__ppbList)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  _ppbList;

/// @brief Field position, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) int32_t  position;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0xaefb300, size 0x5c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Unity::Cinemachine::PolyPathEnum* New_ctor(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  childs) ;

/// @brief Method Reset, addr 0xaefb35c, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaefb40c, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>* const& __cordl_internal_get__ppbList() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*& __cordl_internal_get__ppbList() ;

constexpr int32_t const& __cordl_internal_get_position() const;

constexpr int32_t& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set__ppbList(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  value) ;

constexpr void __cordl_internal_set_position(int32_t  value) ;

/// @brief Method .ctor, addr 0xaefb1a8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  childs) ;

/// @brief Method get_Current, addr 0xaefb368, size 0xa4, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PolyPathBase* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyPathEnum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyPathEnum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyPathEnum(PolyPathEnum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyPathEnum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyPathEnum(PolyPathEnum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22519};

/// @brief Field _ppbList, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  ____ppbList;

/// @brief Field position, offset: 0x18, size: 0x4, def value: None
 int32_t  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PolyPathEnum, ____ppbList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PolyPathEnum, ___position) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PolyPathEnum) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
