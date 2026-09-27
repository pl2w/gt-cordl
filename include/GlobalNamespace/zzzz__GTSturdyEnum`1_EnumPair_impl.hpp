#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSturdyEnum`1_EnumPair.hpp"
#include "GlobalNamespace/zzzz__GTSturdyEnum`1_EnumPair_def.hpp"
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FallbackValue", ty: "TEnum", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TEnum>
constexpr ::GlobalNamespace::GTSturdyEnum_1_EnumPair<TEnum>::GTSturdyEnum_1_EnumPair(::StringW  Name, TEnum  FallbackValue) noexcept  {
this->Name = Name;
this->FallbackValue = FallbackValue;
}
// Ctor Parameters []
template<typename TEnum>
constexpr ::GlobalNamespace::GTSturdyEnum_1_EnumPair<TEnum>::GTSturdyEnum_1_EnumPair()   {
}
