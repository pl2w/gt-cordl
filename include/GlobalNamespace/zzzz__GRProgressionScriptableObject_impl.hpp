#pragma once
// IWYU pragma private; include "GlobalNamespace/GRProgressionScriptableObject.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GRProgressionScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ProgressionLevels_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRProgressionScriptableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRProgressionScriptableObject::*)()>(&::GlobalNamespace::GRProgressionScriptableObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a6960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRProgressionScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_ProgressionLevels>*& GlobalNamespace::GRProgressionScriptableObject::__cordl_internal_get_progressionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_ProgressionLevels>* const& GlobalNamespace::GRProgressionScriptableObject::__cordl_internal_get_progressionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionData;
}
constexpr void GlobalNamespace::GRProgressionScriptableObject::__cordl_internal_set_progressionData(::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_ProgressionLevels>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressionData = value;
}
inline void GlobalNamespace::GRProgressionScriptableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRProgressionScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRProgressionScriptableObject* GlobalNamespace::GRProgressionScriptableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRProgressionScriptableObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRProgressionScriptableObject::GRProgressionScriptableObject()   {
}
