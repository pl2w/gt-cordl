#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnCollectionHeader_SortedColumnState.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__MultiColumnCollectionHeader_SortedColumnState_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState::*)(::UnityEngine::UIElements::SortColumnDescription*, ::UnityEngine::UIElements::SortDirection)>(&::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb83cf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::SortColumnDescription*>(), ::i2c::type_of<::UnityEngine::UIElements::SortDirection>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState::_ctor(::UnityEngine::UIElements::SortColumnDescription*  desc, ::UnityEngine::UIElements::SortDirection  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::SortColumnDescription*>(), ::i2c::type_of<::UnityEngine::UIElements::SortDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, desc, dir);
}
// Ctor Parameters [CppParam { name: "columnDesc", ty: "::UnityEngine::UIElements::SortColumnDescription*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::SortDirection", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState::MultiColumnCollectionHeader_SortedColumnState(::UnityEngine::UIElements::SortColumnDescription*  columnDesc, ::UnityEngine::UIElements::SortDirection  direction) noexcept  {
this->columnDesc = columnDesc;
this->direction = direction;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiColumnCollectionHeader_SortedColumnState::MultiColumnCollectionHeader_SortedColumnState()   {
}
