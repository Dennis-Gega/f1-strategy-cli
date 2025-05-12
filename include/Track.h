#pragma once

enum class TrackID {
  Melbourne,
  Shanghai,
  Suzuka,
  Sakhir,
  Jeddah,
  Miami,
  Imola,
  Monaco,
  Barcelona,
  Montreal,
  Spielberg,
  Silverstone,
  Spa,
  Budapest,
  Zandvoort,
  Monza,
  Baku,
  Singapore,
  Austin,
  MexicoCity,
  SaoPaulo,
  LasVegas,
  Lusail,
  YasMarina
};

class Track {
  TrackID id;
  const char *name;
  int laps;
  double baseLapTime;
  double tireDegMultiplier;

public:
  Track(TrackID id);

  int getLaps();
  double getBaseLapTime();
  double getTireDegMultiplier();
  const char *getName();
};
