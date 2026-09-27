#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/CollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
inline void Unity::XR::CoreUtils::CollectionExtensions::setStaticF_k_String(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "k_String", ::Unity::XR::CoreUtils::CollectionExtensions*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* Unity::XR::CoreUtils::CollectionExtensions::getStaticF_k_String()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "k_String", ::Unity::XR::CoreUtils::CollectionExtensions*>();
}
template<typename T>
inline ::StringW Unity::XR::CoreUtils::CollectionExtensions::Stringify(::System::Collections::Generic::ICollection_1<T>*  collection)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::CollectionExtensions*>(),
                    {"Stringify", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, collection);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::CollectionExtensions::CollectionExtensions()   {
}
