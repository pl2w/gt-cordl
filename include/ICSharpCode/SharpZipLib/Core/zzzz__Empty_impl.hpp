#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/Empty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__Empty_def.hpp"
template<typename T>
inline ::ArrayW<T> ICSharpCode::SharpZipLib::Core::Empty::Array()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::Empty*>(),
                    {"Array", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::Empty::Empty()   {
}
