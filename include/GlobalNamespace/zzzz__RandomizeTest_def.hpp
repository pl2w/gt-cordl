#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomizeTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomizeTest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomizeTest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomizeTest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomizeTest*, "", "RandomizeTest");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomizeTest
class CORDL_TYPE RandomizeTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field randomIterator, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomIterator, put=__cordl_internal_set_randomIterator)) int32_t  randomIterator;

/// @brief Field tempRandIndex, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempRandIndex, put=__cordl_internal_set_tempRandIndex)) int32_t  tempRandIndex;

/// @brief Field tempRandValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempRandValue, put=__cordl_internal_set_tempRandValue)) int32_t  tempRandValue;

/// @brief Field testList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_testList, put=__cordl_internal_set_testList)) ::System::Collections::Generic::List_1<int32_t>*  testList;

/// @brief Field testListArray, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_testListArray, put=__cordl_internal_set_testListArray)) ::ArrayW<int32_t>  testListArray;

static inline ::GlobalNamespace::RandomizeTest* New_ctor() ;

/// @brief Method RandomizeList, addr 0x597e844, size 0x110, virtual false, abstract: false, final false
inline void RandomizeList(::by_ref<::System::Collections::Generic::List_1<int32_t>*>  listToRandomize) ;

/// @brief Method Start, addr 0x597e65c, size 0x1e8, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get_randomIterator() const;

constexpr int32_t& __cordl_internal_get_randomIterator() ;

constexpr int32_t const& __cordl_internal_get_tempRandIndex() const;

constexpr int32_t& __cordl_internal_get_tempRandIndex() ;

constexpr int32_t const& __cordl_internal_get_tempRandValue() const;

constexpr int32_t& __cordl_internal_get_tempRandValue() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_testList() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_testList() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_testListArray() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_testListArray() ;

constexpr void __cordl_internal_set_randomIterator(int32_t  value) ;

constexpr void __cordl_internal_set_tempRandIndex(int32_t  value) ;

constexpr void __cordl_internal_set_tempRandValue(int32_t  value) ;

constexpr void __cordl_internal_set_testList(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_testListArray(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x597e954, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomizeTest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomizeTest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomizeTest(RandomizeTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomizeTest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomizeTest(RandomizeTest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2525};

/// @brief Field testList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___testList;

/// @brief Field testListArray, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___testListArray;

/// @brief Field randomIterator, offset: 0x30, size: 0x4, def value: None
 int32_t  ___randomIterator;

/// @brief Field tempRandIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  ___tempRandIndex;

/// @brief Field tempRandValue, offset: 0x38, size: 0x4, def value: None
 int32_t  ___tempRandValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomizeTest, ___testList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizeTest, ___testListArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizeTest, ___randomIterator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizeTest, ___tempRandIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizeTest, ___tempRandValue) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RandomizeTest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
