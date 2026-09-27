#pragma once
// IWYU pragma private; include "GlobalNamespace/TrickTreatItem.hpp"
#include "GlobalNamespace/zzzz__RandomComponent_1_impl.hpp"
#include "GlobalNamespace/zzzz__TrickTreatItem_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrickTreatItem.OnNextItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrickTreatItem::*)(::UnityEngine::MeshRenderer*)>(&::GlobalNamespace::TrickTreatItem::OnNextItem)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ae0434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TrickTreatItem*>(),
                    {::i2c::class_of<::GlobalNamespace::TrickTreatItem*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrickTreatItem.Randomize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrickTreatItem::*)()>(&::GlobalNamespace::TrickTreatItem::Randomize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae04ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrickTreatItem*>(),
                        {"Randomize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrickTreatItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrickTreatItem::*)()>(&::GlobalNamespace::TrickTreatItem::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ae04f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrickTreatItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TrickTreatItem::OnNextItem(::UnityEngine::MeshRenderer*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TrickTreatItem*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::TrickTreatItem::Randomize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrickTreatItem*>(),
                        {"Randomize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrickTreatItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrickTreatItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrickTreatItem* GlobalNamespace::TrickTreatItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrickTreatItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrickTreatItem::TrickTreatItem()   {
}
