#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Constants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Buffers/Text/zzzz__Utf8Constants_def.hpp"
inline void System::Buffers::Text::Utf8Constants::setStaticF_s_nullUtcOffset(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "s_nullUtcOffset", ::System::Buffers::Text::Utf8Constants*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Buffers::Text::Utf8Constants::getStaticF_s_nullUtcOffset()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "s_nullUtcOffset", ::System::Buffers::Text::Utf8Constants*>();
}
// Ctor Parameters []
constexpr ::System::Buffers::Text::Utf8Constants::Utf8Constants()   {
}
