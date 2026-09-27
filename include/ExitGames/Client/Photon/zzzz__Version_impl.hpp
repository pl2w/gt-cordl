#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Version.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Version_def.hpp"
inline void ExitGames::Client::Photon::Version::setStaticF_clientVersion(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "clientVersion", ::ExitGames::Client::Photon::Version*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::Version::getStaticF_clientVersion()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "clientVersion", ::ExitGames::Client::Photon::Version*>();
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Version::Version()   {
}
