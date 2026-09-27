#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomizeTest.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomizeTest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomizeTest.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomizeTest::*)()>(&::GlobalNamespace::RandomizeTest::Start)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x597e65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeTest*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomizeTest.RandomizeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomizeTest::*)(::by_ref<::System::Collections::Generic::List_1<int32_t>*>)>(&::GlobalNamespace::RandomizeTest::RandomizeList)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x597e844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeTest*>(),
                        {"RandomizeList", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomizeTest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomizeTest::*)()>(&::GlobalNamespace::RandomizeTest::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x597e954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeTest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::RandomizeTest::__cordl_internal_get_testList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::RandomizeTest::__cordl_internal_get_testList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testList;
}
constexpr void GlobalNamespace::RandomizeTest::__cordl_internal_set_testList(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testList = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::RandomizeTest::__cordl_internal_get_testListArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testListArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::RandomizeTest::__cordl_internal_get_testListArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testListArray;
}
constexpr void GlobalNamespace::RandomizeTest::__cordl_internal_set_testListArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testListArray = value;
}
constexpr int32_t& GlobalNamespace::RandomizeTest::__cordl_internal_get_randomIterator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomIterator;
}
constexpr int32_t const& GlobalNamespace::RandomizeTest::__cordl_internal_get_randomIterator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomIterator;
}
constexpr void GlobalNamespace::RandomizeTest::__cordl_internal_set_randomIterator(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomIterator = value;
}
constexpr int32_t& GlobalNamespace::RandomizeTest::__cordl_internal_get_tempRandIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRandIndex;
}
constexpr int32_t const& GlobalNamespace::RandomizeTest::__cordl_internal_get_tempRandIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRandIndex;
}
constexpr void GlobalNamespace::RandomizeTest::__cordl_internal_set_tempRandIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRandIndex = value;
}
constexpr int32_t& GlobalNamespace::RandomizeTest::__cordl_internal_get_tempRandValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRandValue;
}
constexpr int32_t const& GlobalNamespace::RandomizeTest::__cordl_internal_get_tempRandValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRandValue;
}
constexpr void GlobalNamespace::RandomizeTest::__cordl_internal_set_tempRandValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRandValue = value;
}
inline void GlobalNamespace::RandomizeTest::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeTest*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomizeTest::RandomizeList(::by_ref<::System::Collections::Generic::List_1<int32_t>*>  listToRandomize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeTest*>(),
                        {"RandomizeList", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listToRandomize);
}
inline void GlobalNamespace::RandomizeTest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeTest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomizeTest* GlobalNamespace::RandomizeTest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomizeTest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomizeTest::RandomizeTest()   {
}
