#pragma once
// IWYU pragma private; include "GorillaTagScripts/GTSignalTest.hpp"
#include "GlobalNamespace/zzzz__GTSignalListener_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "GorillaTagScripts/zzzz__GTSignalTest_def.hpp"
#include "GlobalNamespace/zzzz__GTSignalListener_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GTSignalTest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GTSignalTest::*)()>(&::GorillaTagScripts::GTSignalTest::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bcb5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GTSignalTest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GorillaTagScripts::GTSignalTest::__cordl_internal_get_targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GorillaTagScripts::GTSignalTest::__cordl_internal_get_targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr void GorillaTagScripts::GTSignalTest::__cordl_internal_set_targets(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targets = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::GTSignalTest::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::GTSignalTest::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GorillaTagScripts::GTSignalTest::__cordl_internal_set_target(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*& GorillaTagScripts::GTSignalTest::__cordl_internal_get_listeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listeners;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>* const& GorillaTagScripts::GTSignalTest::__cordl_internal_get_listeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listeners;
}
constexpr void GorillaTagScripts::GTSignalTest::__cordl_internal_set_listeners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listeners = value;
}
inline void GorillaTagScripts::GTSignalTest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GTSignalTest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GTSignalTest* GorillaTagScripts::GTSignalTest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GTSignalTest*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GTSignalTest::GTSignalTest()   {
}
